#.outcutable files for this directory
OBJECTS = FolderMain.out HasPtrUseCount.out \
		  HasPtrValueLike.out \
		  moveHP.out serial.out StrFolderMain.out \
		  useStrVec.out substr.out 

# the corresponding source file uses c++ 11 features
C11_OBJECTS = copyNoMove.out 

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .out files
include ../GNU_makefile_template

LOCFLAGS = -I../1 -I../7

Folder.o FolderMain.o: Folder.h
StrFolder.o StrFolderMain.o: StrFolder.h String.h
String.o: String.h
useStrVec.o StrVec.o: String.h StrVec.h

useStrVec.out: StrVec.o useStrVec.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) StrVec.o useStrVec.o -o useStrVec.out

FolderMain.out: Folder.o FolderMain.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) Folder.o FolderMain.o -o FolderMain.out

StrFolderMain.out: StrFolder.o StrFolderMain.o String.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) StrFolder.o StrFolderMain.o String.o \
		-o StrFolderMain.out

