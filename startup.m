clc
close all 
%% Team- 2 HilClimbers
% Authors:
% Manikanta (99005017)
% Archana (99005023)
% Prasad (99005028)

% BCM Features
% LED Rear Light Module - Manikanta
% Power Window Module - Archana 
% HVAC Module - Prasad

%% Setting paths 

addpath('1_Model')
addpath('1_Model\CustomLibrary/customFiles')
addpath('6_PreviousModels')
addpath('6_PreviousModels\Individual')
addpath('6_PreviousModels\Integrated')
load('6_PreviousModels\Integrated\baseworkspace_variables.mat')


%% Selection for Inputs - dashboards /MIL testing
prompt = {'Enter 0 for manual test, enter 1 for automated test'};
dlgtitle='Input';
dims=[1 35];
definput={'0'};
answer=inputdlg(prompt,dlgtitle,dims,definput);
input_mode=str2double(answer{:});
%% Selection of inputs for ECU subsystem - manual / SIL automated test
prompt2 = {'Enter 0 for manual test of reverse light subsystem, enter 1 for sil automated test on S function block'};
dlgtitle2='Input';
dims2=[1 35];
definput2={'0'};
answer=inputdlg(prompt2,dlgtitle2,dims2,definput2);
ecu_mode=str2double(answer{:});






