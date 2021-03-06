#===================
# gfortran
#===================
F90 = gfortran

#Add next two lines for parallel postw90. Choose the correct name of the mpi f90 wrapper
#COMMS  = mpi 
#MPIF90 = mpgfortran #mpif90

FCOPTS = -O2
LDOPTS =

#Next two lines are good for debugging
#FCOPTS = -Wall -Waliasing -Wsurprising -Wline-truncation -Wno-tabs -Wno-uninitialized -Wno-unused-dummy-argument -Wno-unused -Wno-character-truncation -O1 -g -fbacktrace --std=f2003
#LDOPTS = -Wall -Waliasing -Wsurprising -Wline-truncation -Wno-tabs -Wno-uninitialized -Wno-unused-dummy-argument -Wno-unused -Wno-character-truncation -O1 -g -fbacktrace


#=======================
# ATLAS Blas and LAPACK
#=======================
#LIBDIR = /usr/local/lib
#LIBS = -L$(LIBDIR)  -llapack -lf77blas -lcblas -latlas


#=======================
# NETLIB LAPACK and BLAS
#=======================
LIBDIR = /rscratch/jry20/LIB/gfortran 
LIBS = -L$(LIBDIR)  -llapack -lblas



