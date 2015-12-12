#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/2117958763/Dosierer.o \
	${OBJECTDIR}/_ext/2117958763/Dosierer_Verwaltung.o \
	${OBJECTDIR}/_ext/2117958763/Entleerer.o \
	${OBJECTDIR}/_ext/2117958763/GUI.o \
	${OBJECTDIR}/_ext/2117958763/Gefilltertes_Rezeptbuch.o \
	${OBJECTDIR}/_ext/2117958763/Mischer.o \
	${OBJECTDIR}/_ext/2117958763/Observer.o \
	${OBJECTDIR}/_ext/2117958763/Rezeptur_Prozessor.o \
	${OBJECTDIR}/_ext/2117958763/Stampfer.o \
	${OBJECTDIR}/_ext/2117958763/Subject.o \
	${OBJECTDIR}/_ext/2117958763/Waage.o \
	${OBJECTDIR}/_ext/2117958763/Zeit.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=/home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Rezeptbuch_g++_CASE_Ubuntu.o

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cocktailpro

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cocktailpro: /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Rezeptbuch_g++_CASE_Ubuntu.o

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cocktailpro: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cocktailpro ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/2117958763/Dosierer.o: /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Dosierer.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2117958763
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/2117958763/Dosierer.o /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Dosierer.cpp

${OBJECTDIR}/_ext/2117958763/Dosierer_Verwaltung.o: /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Dosierer_Verwaltung.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2117958763
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/2117958763/Dosierer_Verwaltung.o /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Dosierer_Verwaltung.cpp

${OBJECTDIR}/_ext/2117958763/Entleerer.o: /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Entleerer.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2117958763
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/2117958763/Entleerer.o /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Entleerer.cpp

${OBJECTDIR}/_ext/2117958763/GUI.o: /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/GUI.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2117958763
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/2117958763/GUI.o /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/GUI.cpp

${OBJECTDIR}/_ext/2117958763/Gefilltertes_Rezeptbuch.o: /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Gefilltertes_Rezeptbuch.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2117958763
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/2117958763/Gefilltertes_Rezeptbuch.o /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Gefilltertes_Rezeptbuch.cpp

${OBJECTDIR}/_ext/2117958763/Mischer.o: /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Mischer.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2117958763
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/2117958763/Mischer.o /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Mischer.cpp

${OBJECTDIR}/_ext/2117958763/Observer.o: /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Observer.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2117958763
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/2117958763/Observer.o /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Observer.cpp

${OBJECTDIR}/_ext/2117958763/Rezeptur_Prozessor.o: /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Rezeptur_Prozessor.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2117958763
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/2117958763/Rezeptur_Prozessor.o /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Rezeptur_Prozessor.cpp

${OBJECTDIR}/_ext/2117958763/Stampfer.o: /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Stampfer.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2117958763
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/2117958763/Stampfer.o /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Stampfer.cpp

${OBJECTDIR}/_ext/2117958763/Subject.o: /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Subject.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2117958763
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/2117958763/Subject.o /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Subject.cpp

${OBJECTDIR}/_ext/2117958763/Waage.o: /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Waage.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2117958763
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/2117958763/Waage.o /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Waage.cpp

${OBJECTDIR}/_ext/2117958763/Zeit.o: /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Zeit.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2117958763
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/2117958763/Zeit.o /home/fs/NetBeansProjects/Cocktailpro/Cocktailpro/Zeit.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cocktailpro

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
