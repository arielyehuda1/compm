COPYI I1 0
COPYI I2 0
COPYI I3 0
COPYI I4 0
COPYI I5 0
COPYI I6 0
COPYI I7 0
JLINK 55
HALT
COPYI I3 1
STORI I3 I1 -4
RETRN
RETRN
ADD2I I2 I2 4
ADD2I I3 I1 0
COPYI I4 0
CITOF F2 I2
STORI I0 I2 0
STORF F0 F2 0
STORI I1 I2 4
STORF F1 F2 4
STORI I2 I2 8
STORF F2 F2 8
STORI I3 I2 12
STORF F3 F2 12
STORI I4 I2 16
STORF F4 F2 16
ADD2I I2 I2 28
COPYI I1 I2
CITOF F1 I1
STORI I4 I1 -8
JLINK 10
COPYI I2 I1
LOADI I5 I1 -4
SUBTI I2 I2 28
CITOF F2 I2
LOADF F0 F2 0
LOADI I0 I2 0
LOADF F1 F2 4
LOADI I1 I2 4
LOADF F3 F2 12
LOADI I3 I2 12
LOADF F4 F2 16
LOADI I4 I2 16
STORI I5 I3 0
ADD2I I6 I1 0
LOADI I7 I1 0
LOADI I8 I1 -12
ADD2I I9 I7 I8
STORI I9 I6 0
LOADI I10 I1 0
STORI I10 I1 -4
RETRN
RETRN
ADD2I I2 I2 4
ADD2I I2 I2 4
ADD2I I2 I2 4
ADD2I I3 I1 0
COPYI I4 2
STORI I4 I3 0
LOADI I5 I1 0
COPYI I6 0
CITOF F2 I2
STORI I0 I2 0
STORF F0 F2 0
STORI I1 I2 4
STORF F1 F2 4
STORI I2 I2 8
STORF F2 F2 8
STORI I3 I2 12
STORF F3 F2 12
STORI I4 I2 16
STORF F4 F2 16
STORI I5 I2 20
STORF F5 F2 20
STORI I6 I2 24
STORF F6 F2 24
ADD2I I2 I2 40
COPYI I1 I2
CITOF F1 I1
STORI I5 I1 -12
STORI I6 I1 -8
JLINK 14
COPYI I2 I1
LOADI I7 I1 -4
SUBTI I2 I2 40
CITOF F2 I2
LOADF F0 F2 0
LOADI I0 I2 0
LOADF F1 F2 4
LOADI I1 I2 4
LOADF F3 F2 12
LOADI I3 I2 12
LOADF F4 F2 16
LOADI I4 I2 16
LOADF F5 F2 20
LOADI I5 I2 20
LOADF F6 F2 24
LOADI I6 I2 24
LOADI I8 I1 0
SGRTI I9 I7 I8
BREQZ I9 111
UJUMP 104
ADD2I I10 I1 4
COPYI I11 20
STORI I11 I10 0
ADD2I I12 I1 8
COPYI I13 10
STORI I13 I12 0
UJUMP 117
ADD2I I14 I1 4
COPYI I15 10
STORI I15 I14 0
ADD2I I16 I1 8
COPYI I17 20
STORI I17 I16 0
LOADI I18 I1 4
PRNTI I18
LOADI I19 I1 8
PRNTI I19
RETRN
