CREATE TABLE Club
(
    ClubID NUMBER(38) NOT NULL,
    ClubName VARCHAR(30) NOT NULL,
    Location VARCHAR(50) NOT NULL,
    Number_of_teams NUMBER(10) NOT NULL,
    CONSTRAINT Club_ClubID_PK PRIMARY KEY (ClubID)
);

CREATE TABLE Physio
(
    PhysioID NUMBER(38) NOT NULL,
    Name VARCHAR(30) NOT NULL,
    Email VARCHAR(30) NOT NULL,
    Phone_number NUMBER(11) NOT NULL,
    Physio_Speciality VARCHAR(20) NOT NULL,
    CONSTRAINT Physio_PhysioID_PK PRIMARY KEY (PhysioID)
);

CREATE TABLE Physio_Allocation
(
    OpponentID NUMBER(10) NOT NULL,
    PhysioID NUMBER(10) NOT NULL,
    CONSTRAINT Physio_Allocation_TeamID_FK FOREIGN KEY (OpponentID) REFERENCES Team(OpponentID),
    CONSTRAINT Physio_Allocation_PhysioID_FK FOREIGN KEY (PhysioID) REFERENCES Physio(PhysioID),
    PRIMARY KEY (OpponentID, PhysioID)
);

CREATE TABLE HeadCoach
(
    HeadcoachID NUMBER(10) NOT NULL,
    Name VARCHAR(20) NOT NULL,
    Email VARCHAR(30) NOT NULL,
    Phone_number NUMBER(11) NOT NULL,
    CONSTRAINT HeadCoach_HeadCoachID_PK PRIMARY KEY (HeadcoachID)
);

CREATE TABLE AssistantCoach
(
    AssistantCoachID NUMBER(10) NOT NULL,
    Name VARCHAR(20) NOT NULL,
    Email VARCHAR(30) NOT NULL,
    Phone_number NUMBER(11) NOT NULL,
    CoachingExperience VARCHAR(30) NOT NULL,
    CONSTRAINT AssistantCoach_AssistantCoachID_PK PRIMARY KEY (AssistantCoachID)
);

CREATE TABLE Team
(
    OpponentID NUMBER(10) NOT NULL,
    Team_name VARCHAR(20) NOT NULL,
    Recent_Matches DATE NOT NULL,
    HeadCoachID NUMBER(10) NOT NULL,
    Stadium_Location VARCHAR(50) NOT NULL,
    Capacity_of_Stadium NUMBER(10) NOT NULL,
    ClubID NUMBER(20) NOT NULL,
    CONSTRAINT Team_OpponentID_PK PRIMARY KEY (OpponentID),
    CONSTRAINT Team_HeadCoachID_FK FOREIGN KEY (HeadCoachID) REFERENCES HeadCoach(HeadcoachID),
    CONSTRAINT Team_ClubID_FK FOREIGN KEY (ClubID) REFERENCES Club(ClubID)
);

CREATE TABLE AssistantCoach_allocation
(
    OpponentID NUMBER(10) NOT NULL,
    AssistantCoachID NUMBER(10) NOT NULL,
    CONSTRAINT AssistantCoach_allocation_OpponentID_FK FOREIGN KEY (OpponentID) REFERENCES Team(OpponentID),
    CONSTRAINT AssistantCoach_allocation_AssistantCoachID_FK FOREIGN KEY (AssistantCoachID) REFERENCES AssistantCoach(AssistantCoachID),
    PRIMARY KEY (OpponentID, AssistantCoachID)
);

CREATE TABLE Player
(
    Player_ID NUMBER(10) NOT NULL,
    OpponentID NUMBER(10) NOT NULL,
    Date_joined DATE NOT NULL,
    Name VARCHAR(34) NOT NULL,
    Position VARCHAR(40) NOT NULL,
    Nationality VARCHAR(40) NOT NULL,
    Height_CM NUMBER(38) NOT NULL,
    MonthlyWages NUMBER(38) NOT NULL,
    Team_name VARCHAR(30) NOT NULL,
    Transfer_Value NUMBER(10) NOT NULL,
    availability VARCHAR(30) NOT NULL,
    CONSTRAINT Player_PlayerID_PK PRIMARY KEY (Player_ID),
    CONSTRAINT Player_OpponentID_FK FOREIGN KEY (OpponentID) REFERENCES Team(OpponentID)
);

CREATE TABLE Matche
(
    match_ID NUMBER(10) NOT NULL,
    OpponentID NUMBER(10) NOT NULL,
    Date_of_Match DATE NOT NULL,
    AssistantCoachID NUMBER(10) NOT NULL,
    PhysioID NUMBER(10) NOT NULL,
    TeamCaptain VARCHAR(30) NOT NULL,
    Results VARCHAR(50) NOT NULL,
    ScoreLine VARCHAR(10) NOT NULL,
    ClubID NUMBER(20) NOT NULL,
    CONSTRAINT Matche_matchID_PK PRIMARY KEY (match_ID),
    CONSTRAINT Matche_OpponentID_FK FOREIGN KEY (OpponentID) REFERENCES Team(OpponentID),
    CONSTRAINT Matche_AssistantCoachID_FK FOREIGN KEY (AssistantCoachID) REFERENCES AssistantCoach(AssistantCoachID),
    CONSTRAINT Matche_PhysioID_FK FOREIGN KEY (PhysioID) REFERENCES Physio(PhysioID),
    CONSTRAINT Matche_ClubID_FK FOREIGN KEY (ClubID) REFERENCES Club(ClubID)
);
