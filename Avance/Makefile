BUILD_DIR = Inicio_sesion
EXE_APP = build-Inicio_sesion-Desktop-Debug
CMAKE = cmake
MAKE = make
APP = Inicio_sesion
CXXFLAGS = -Wall

all: run

run:
	cd $(BUILD_DIR)&&\
    doxygen -g&&\
    doxygen&&\
    open html/index.html&&\
    cd ..&&\
    ./$(EXE_APP)/$(APP)
