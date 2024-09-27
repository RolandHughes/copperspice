/***********************************************************************
*
* Copyright (c) 2012-2024 Barbara Geller
* Copyright (c) 2012-2024 Ansel Sermersheim
*
* Copyright (c) 2015 The Qt Company Ltd.
* Copyright (c) 2012-2016 Digia Plc and/or its subsidiary(-ies).
* Copyright (c) 2008-2012 Nokia Corporation and/or its subsidiary(-ies).
*
* This file is part of CopperSpice.
*
* CopperSpice is free software. You can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public License
* version 2.1 as published by the Free Software Foundation.
*
* CopperSpice is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
* https://www.gnu.org/licenses/
*
***********************************************************************/

#include <qmath.h>

const qreal qt_sine_table[QT_SINE_TABLE_SIZE] =
{
    qreal( 0.0 ),
    qreal( 0.024541228522912288 ),
    qreal( 0.049067674327418015 ),
    qreal( 0.073564563599667426 ),
    qreal( 0.098017140329560604 ),
    qreal( 0.1224106751992162 ),
    qreal( 0.14673047445536175 ),
    qreal( 0.17096188876030122 ),
    qreal( 0.19509032201612825 ),
    qreal( 0.2191012401568698 ),
    qreal( 0.24298017990326387 ),
    qreal( 0.26671275747489837 ),
    qreal( 0.29028467725446233 ),
    qreal( 0.31368174039889152 ),
    qreal( 0.33688985339222005 ),
    qreal( 0.35989503653498811 ),
    qreal( 0.38268343236508978 ),
    qreal( 0.40524131400498986 ),
    qreal( 0.42755509343028208 ),
    qreal( 0.44961132965460654 ),
    qreal( 0.47139673682599764 ),
    qreal( 0.49289819222978404 ),
    qreal( 0.51410274419322166 ),
    qreal( 0.53499761988709715 ),
    qreal( 0.55557023301960218 ),
    qreal( 0.57580819141784534 ),
    qreal( 0.59569930449243336 ),
    qreal( 0.61523159058062682 ),
    qreal( 0.63439328416364549 ),
    qreal( 0.65317284295377676 ),
    qreal( 0.67155895484701833 ),
    qreal( 0.68954054473706683 ),
    qreal( 0.70710678118654746 ),
    qreal( 0.72424708295146689 ),
    qreal( 0.74095112535495911 ),
    qreal( 0.75720884650648446 ),
    qreal( 0.77301045336273699 ),
    qreal( 0.78834642762660623 ),
    qreal( 0.80320753148064483 ),
    qreal( 0.81758481315158371 ),
    qreal( 0.83146961230254524 ),
    qreal( 0.84485356524970701 ),
    qreal( 0.85772861000027212 ),
    qreal( 0.87008699110871135 ),
    qreal( 0.88192126434835494 ),
    qreal( 0.89322430119551532 ),
    qreal( 0.90398929312344334 ),
    qreal( 0.91420975570353069 ),
    qreal( 0.92387953251128674 ),
    qreal( 0.93299279883473885 ),
    qreal( 0.94154406518302081 ),
    qreal( 0.94952818059303667 ),
    qreal( 0.95694033573220894 ),
    qreal( 0.96377606579543984 ),
    qreal( 0.97003125319454397 ),
    qreal( 0.97570213003852857 ),
    qreal( 0.98078528040323043 ),
    qreal( 0.98527764238894122 ),
    qreal( 0.98917650996478101 ),
    qreal( 0.99247953459870997 ),
    qreal( 0.99518472667219682 ),
    qreal( 0.99729045667869021 ),
    qreal( 0.99879545620517241 ),
    qreal( 0.99969881869620425 ),
    qreal( 1.0 ),
    qreal( 0.99969881869620425 ),
    qreal( 0.99879545620517241 ),
    qreal( 0.99729045667869021 ),
    qreal( 0.99518472667219693 ),
    qreal( 0.99247953459870997 ),
    qreal( 0.98917650996478101 ),
    qreal( 0.98527764238894122 ),
    qreal( 0.98078528040323043 ),
    qreal( 0.97570213003852857 ),
    qreal( 0.97003125319454397 ),
    qreal( 0.96377606579543984 ),
    qreal( 0.95694033573220894 ),
    qreal( 0.94952818059303667 ),
    qreal( 0.94154406518302081 ),
    qreal( 0.93299279883473885 ),
    qreal( 0.92387953251128674 ),
    qreal( 0.91420975570353069 ),
    qreal( 0.90398929312344345 ),
    qreal( 0.89322430119551521 ),
    qreal( 0.88192126434835505 ),
    qreal( 0.87008699110871146 ),
    qreal( 0.85772861000027212 ),
    qreal( 0.84485356524970723 ),
    qreal( 0.83146961230254546 ),
    qreal( 0.81758481315158371 ),
    qreal( 0.80320753148064494 ),
    qreal( 0.78834642762660634 ),
    qreal( 0.7730104533627371 ),
    qreal( 0.75720884650648468 ),
    qreal( 0.74095112535495899 ),
    qreal( 0.72424708295146689 ),
    qreal( 0.70710678118654757 ),
    qreal( 0.68954054473706705 ),
    qreal( 0.67155895484701855 ),
    qreal( 0.65317284295377664 ),
    qreal( 0.63439328416364549 ),
    qreal( 0.61523159058062693 ),
    qreal( 0.59569930449243347 ),
    qreal( 0.57580819141784545 ),
    qreal( 0.55557023301960218 ),
    qreal( 0.53499761988709715 ),
    qreal( 0.51410274419322177 ),
    qreal( 0.49289819222978415 ),
    qreal( 0.47139673682599786 ),
    qreal( 0.44961132965460687 ),
    qreal( 0.42755509343028203 ),
    qreal( 0.40524131400498992 ),
    qreal( 0.38268343236508989 ),
    qreal( 0.35989503653498833 ),
    qreal( 0.33688985339222033 ),
    qreal( 0.31368174039889141 ),
    qreal( 0.29028467725446239 ),
    qreal( 0.26671275747489848 ),
    qreal( 0.24298017990326407 ),
    qreal( 0.21910124015687005 ),
    qreal( 0.19509032201612861 ),
    qreal( 0.17096188876030122 ),
    qreal( 0.1467304744553618 ),
    qreal( 0.12241067519921635 ),
    qreal( 0.098017140329560826 ),
    qreal( 0.073564563599667732 ),
    qreal( 0.049067674327417966 ),
    qreal( 0.024541228522912326 ),
    qreal( 0.0 ),
    qreal( -0.02454122852291208 ),
    qreal( -0.049067674327417724 ),
    qreal( -0.073564563599667496 ),
    qreal( -0.09801714032956059 ),
    qreal( -0.1224106751992161 ),
    qreal( -0.14673047445536158 ),
    qreal( -0.17096188876030097 ),
    qreal( -0.19509032201612836 ),
    qreal( -0.2191012401568698 ),
    qreal( -0.24298017990326382 ),
    qreal( -0.26671275747489825 ),
    qreal( -0.29028467725446211 ),
    qreal( -0.31368174039889118 ),
    qreal( -0.33688985339222011 ),
    qreal( -0.35989503653498811 ),
    qreal( -0.38268343236508967 ),
    qreal( -0.40524131400498969 ),
    qreal( -0.42755509343028181 ),
    qreal( -0.44961132965460665 ),
    qreal( -0.47139673682599764 ),
    qreal( -0.49289819222978393 ),
    qreal( -0.51410274419322155 ),
    qreal( -0.53499761988709693 ),
    qreal( -0.55557023301960196 ),
    qreal( -0.57580819141784534 ),
    qreal( -0.59569930449243325 ),
    qreal( -0.61523159058062671 ),
    qreal( -0.63439328416364527 ),
    qreal( -0.65317284295377653 ),
    qreal( -0.67155895484701844 ),
    qreal( -0.68954054473706683 ),
    qreal( -0.70710678118654746 ),
    qreal( -0.72424708295146678 ),
    qreal( -0.74095112535495888 ),
    qreal( -0.75720884650648423 ),
    qreal( -0.77301045336273666 ),
    qreal( -0.78834642762660589 ),
    qreal( -0.80320753148064505 ),
    qreal( -0.81758481315158382 ),
    qreal( -0.83146961230254524 ),
    qreal( -0.84485356524970701 ),
    qreal( -0.85772861000027201 ),
    qreal( -0.87008699110871135 ),
    qreal( -0.88192126434835494 ),
    qreal( -0.89322430119551521 ),
    qreal( -0.90398929312344312 ),
    qreal( -0.91420975570353047 ),
    qreal( -0.92387953251128652 ),
    qreal( -0.93299279883473896 ),
    qreal( -0.94154406518302081 ),
    qreal( -0.94952818059303667 ),
    qreal( -0.95694033573220882 ),
    qreal( -0.96377606579543984 ),
    qreal( -0.97003125319454397 ),
    qreal( -0.97570213003852846 ),
    qreal( -0.98078528040323032 ),
    qreal( -0.98527764238894111 ),
    qreal( -0.9891765099647809 ),
    qreal( -0.99247953459871008 ),
    qreal( -0.99518472667219693 ),
    qreal( -0.99729045667869021 ),
    qreal( -0.99879545620517241 ),
    qreal( -0.99969881869620425 ),
    qreal( -1.0 ),
    qreal( -0.99969881869620425 ),
    qreal( -0.99879545620517241 ),
    qreal( -0.99729045667869021 ),
    qreal( -0.99518472667219693 ),
    qreal( -0.99247953459871008 ),
    qreal( -0.9891765099647809 ),
    qreal( -0.98527764238894122 ),
    qreal( -0.98078528040323043 ),
    qreal( -0.97570213003852857 ),
    qreal( -0.97003125319454397 ),
    qreal( -0.96377606579543995 ),
    qreal( -0.95694033573220894 ),
    qreal( -0.94952818059303679 ),
    qreal( -0.94154406518302092 ),
    qreal( -0.93299279883473907 ),
    qreal( -0.92387953251128663 ),
    qreal( -0.91420975570353058 ),
    qreal( -0.90398929312344334 ),
    qreal( -0.89322430119551532 ),
    qreal( -0.88192126434835505 ),
    qreal( -0.87008699110871146 ),
    qreal( -0.85772861000027223 ),
    qreal( -0.84485356524970723 ),
    qreal( -0.83146961230254546 ),
    qreal( -0.81758481315158404 ),
    qreal( -0.80320753148064528 ),
    qreal( -0.78834642762660612 ),
    qreal( -0.77301045336273688 ),
    qreal( -0.75720884650648457 ),
    qreal( -0.74095112535495911 ),
    qreal( -0.724247082951467 ),
    qreal( -0.70710678118654768 ),
    qreal( -0.68954054473706716 ),
    qreal( -0.67155895484701866 ),
    qreal( -0.65317284295377709 ),
    qreal( -0.63439328416364593 ),
    qreal( -0.61523159058062737 ),
    qreal( -0.59569930449243325 ),
    qreal( -0.57580819141784523 ),
    qreal( -0.55557023301960218 ),
    qreal( -0.53499761988709726 ),
    qreal( -0.51410274419322188 ),
    qreal( -0.49289819222978426 ),
    qreal( -0.47139673682599792 ),
    qreal( -0.44961132965460698 ),
    qreal( -0.42755509343028253 ),
    qreal( -0.40524131400499042 ),
    qreal( -0.38268343236509039 ),
    qreal( -0.359895036534988 ),
    qreal( -0.33688985339222 ),
    qreal( -0.31368174039889152 ),
    qreal( -0.2902846772544625 ),
    qreal( -0.26671275747489859 ),
    qreal( -0.24298017990326418 ),
    qreal( -0.21910124015687016 ),
    qreal( -0.19509032201612872 ),
    qreal( -0.17096188876030177 ),
    qreal( -0.14673047445536239 ),
    qreal( -0.12241067519921603 ),
    qreal( -0.098017140329560506 ),
    qreal( -0.073564563599667412 ),
    qreal( -0.049067674327418091 ),
    qreal( -0.024541228522912448 )
};

