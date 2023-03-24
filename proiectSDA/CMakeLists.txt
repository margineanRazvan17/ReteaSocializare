cmake_minimum_required(VERSION 3.21)
project(proiectSDA)

set(CMAKE_CXX_STANDARD 14)

add_executable(proiectSDA main.cpp test.cpp test.h utilizator.h Array.h utilizatorRepository.h utilizatorService.h UserInterface.h prietenie.h prietenieRepository.h prietenieService.h Mesaj.h MesajRepository.h MesajService.h eveniment.h evenimentRepository.h evenimenService.h node.h dictionary.h)
