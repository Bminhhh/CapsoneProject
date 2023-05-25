%% Import data from spreadsheet
% Script for importing data from the following spreadsheet:
%
%    Workbook: E:\NHAT DUY\Chuy�n ng�nh\Lu?n v?n t?t nghi?p\Lookup table.xlsx
%    Worksheet: Trang_t�nh1
%
% To extend the code for use with different selected data or a different
% spreadsheet, generate a function instead of a script.

% Auto-generated by MATLAB on 2023/04/07 12:07:58

%% Import the Steering angle data
[~, ~, angle] = xlsread('Lookup_table.xlsx','Trang_t�nh1','A3:A15');

%% Create output Steering angle  variable
Steering_Angle = reshape([angle{:}],size(angle));
%% Import the Vehicle speed data
[~, ~, speed] = xlsread('Lookup_table.xlsx','Trang_t�nh1','B2:E2');

%% Create output Vehicle speed  variable
Vehicle_Speed = reshape([speed{:}],size(speed));
%% Import the Moment limit data
[~, ~, momen] = xlsread('Lookup_table.xlsx','Trang_t�nh1','H3:K15');

%% Create output Moment limit variable
Moment_limit = reshape([momen{:}],size(momen));
%% Import the Steering angle data_opposite
%[~, ~, angle1] = xlsread('Lookup_table.xlsx','Trang_t�nh1','A3:A9');

%% Create output Steering angle  variable_opposte
%Steering_Angle_am = reshape([angle1{:}],size(angle1));
%% Import the Moment limit data_opposite
%[~, ~, momen1] = xlsread('Lookup_table.xlsx','Trang_t�nh1','B3:E9');

%% Create output Moment limit variable_opposite
%Moment_limit_am = reshape([momen1{:}],size(momen1));
%% Clear temporary variables
%clearvars raw;
