# import build_ui
try:
    from pyqt_distutils.build_ui import build_ui
    cmdclass = {'build_ui': build_ui}
except ImportError:
    build_ui = None  # user won't have pyqt_distutils when deploying
    cmdclass = {}

...

setup(...,
      cmdclass=cmdclass)