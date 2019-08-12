from PyQt5.QtCore import Qt, QThread, QTimer
from PyQt5.QtWidgets import QMainWindow, QWidget, QPushButton, QVBoxLayout, QApplication, QSlider, QFileDialog
from pyqtgraph import ImageView
import numpy as np

class StartWindow(QMainWindow):
    def __init__(self, camera = None):
        super(QMainWindow, self).__init__()
        self.camera = camera

        self.setWindowTitle("Media player Vision system")

        self.central_widget = QWidget()
        self.button_loadfolder = QPushButton('Load folder', self.central_widget)
        
        self.image_view = ImageView()
        self.slider = QSlider(Qt.Horizontal)
        self.slider.setRange(0,100)
        self.slider.setTickPosition(QSlider.TicksBelow)
        self.slider.setTickInterval(10)

        self.layout = QVBoxLayout(self.central_widget)
        self.layout.addWidget(self.button_loadfolder)
        self.layout.addWidget(self.image_view)
        self.layout.addWidget(self.slider)
        self.setCentralWidget(self.central_widget)

        self.button_loadfolder.clicked.connect(self.load_files)
        self.slider.valueChanged.connect(self.update_tick)

    def load_files(self):
        QFileDialog.getExistingDirectory(self, 'Select directory')
        options = QFileDialog.Options()
        options |= QFileDialog.DontUseNativeDialog
        options |= QFileDialog.DontUseCustomDirectoryIcons
        dialog = QFileDialog()
        gtk_window_set_transient_for()
        dialog.setOptions(options)
        dialog.setFileMode(QFileDialog.DirectoryOnly)
        #files, _ = QFileDialog.getOpenFileNames(self,"QFileDialog.getOpenFileNames()", "","All Files (*);;Python Files (*.py)", options=options)
        folder = dialog.getExistingDirectory(self, 'Select directory')
        if folder:
            print(folder)

    def update_tick(self, value):
        pass

if __name__ == '__main__':
    app = QApplication([])
    window = StartWindow()
    window.show()
    app.exit(app.exec_())