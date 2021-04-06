///
/// @file messages.h
/// @brief This file contains message definitions (.h).
/// @author Ximedica www.ximedica.com
/// @date Created 2/10/2020
/// @copyright Copyright &copy 2020 Vitara Biomedical, Inc - All Rights Reserved\n
/// Unauthorized copying of this file, via any medium is strictly prohibited
///

#ifndef MESSAGES_H_
#define MESSAGES_H_

#include <cstdint>

/*** Message Manager / Message Type definitions - START ***/
/*** This is a 16-bit entry with the 2 most significant bits being reserved by the Message Manager ***/
/* Upper byte - System Check (00) */
#define SYS_CHECK_POST_REQUEST                              0x0001
#define SYS_CHECK_POST_RESPONSE                             0x0002
#define SYS_CHECK_RUN_REQUEST                               0x0003
#define SYS_CHECK_ECHO_REQUEST                              0x0004
#define SYS_CHECK_ECHO_RESPONSE                             0x0005
#define SYS_CHECK_BOARD_ECHO_REQUEST                        0x0006
#define SYS_CHECK_BOARD_ECHO_RESPONSE                       0x0007
/* Upper byte - Data Log (01) (including event generation) */
#define DATA_LOG_LOCAL_DELETE                               0x0100
#define DATA_LOG_LOCAL_DISPLAY                              0x0101
#define DATA_LOG_NEW_EVENT                                  0x0102
#define DATA_LOG_SS_SPECIFIC_EVENT                          0x0103
/* Upper byte - Sensor Data (02) */
#define SENSOR_DATA_REQUEST                                 0x0200
#define SENSOR_DATA_RESPONSE                                0x0201
#define SENSOR_DATA_PUSH                                    0x0202
/* Upper byte - Fan Drive and Sense (03) */
#define FAN_DRIVE_AND_SENSE_SET_REQUEST                     0x0300
#define FAN_DRIVE_AND_SENSE_SET_SUCCESS                     0x0301
#define FAN_DRIVE_AND_SENSE_SET_FAILURE                     0x0302
#define FAN_DRIVE_AND_SENSE_GET_REQUEST                     0x0303
#define FAN_DRIVE_AND_SENSE_GET_SUCCESS                     0x0304
#define FAN_DRIVE_AND_SENSE_GET_FAILURE                     0x0305
/* Upper byte - Blood-Gas Board (05) */
#define BG_BOARD_QUANTUM_MEASUREMENT                        0x0500
#define BG_BOARD_SWEEP_FLOW                                 0x0501
#define BG_BOARD_CALIBRATE                                  0x0502
#define BG_BOARD_GAS_VALUES                                 0x0503
#define BG_BOARD_PRESSURE_VALUES                            0x0504
#define BG_BOARD_SONOFLOW_SENSOR                            0x0505
#define BG_BOARD_SPECTRUM_GAS_VALUES                        0x0506
#define BG_BOARD_PRESSURE_POINT                             0x0507
#define BG_BOARD_GAS_VALUE_REQUEST                          0x0508
#define BG_BOARD_GAS_VALUE_RESPONSE                         0x0509
/* Upper byte - Master Controller Board (06) */
#define MC_BOARD_LIGHT_MSG                                  0x0600
#define MC_BOARD_LIGHT_RESPONSE                             0x0601
#define MC_BOARD_BATTERY_VALUE_GET_REQUEST                  0x0602
#define MC_BOARD_BATTERY_VALUE_GET_SUCCESS                  0x0603
#define MC_BOARD_MAIN_POWER_DISCONNECTED                    0x0604
/* Upper byte - Alert/Alarm (07) */
#define ALARM_SET_REQUEST                                   0x0700
#define ALARM_SET_SUCCESS                                   0x0701
#define ALARM_SET_FAILURE                                   0x0702
#define ALARM_GET_REQUEST                                   0x0703
#define ALARM_GET_SUCCESS                                   0x0704
#define ALARM_GET_FAILURE                                   0x0705
/* Upper byte - Audio (08) */
#define AUDIO_SET_REQUEST                                   0x0800
#define AUDIO_SET_SUCCESS                                   0x0801
#define AUDIO_SET_FAILURE                                   0x0802
#define AUDIO_GET_REQUEST                                   0x0803
#define AUDIO_GET_SUCCESS                                   0x0804
#define AUDIO_GET_FAILURE                                   0x0805
/* Upper byte - Visual (09) */
#define VISUAL_SET_REQUEST                                  0x0900
#define VISUAL_SET_SUCCESS                                  0x0901
#define VISUAL_SET_FAILURE                                  0x0902
#define VISUAL_GET_REQUEST                                  0x0903
#define VISUAL_GET_SUCCESS                                  0x0904
#define VISUAL_GET_FAILURE                                  0x0905
/* Upper byte - Start Display (0A) */
#define START_DISPLAY_SET_REQUEST                           0x0A00
#define START_DISPLAY_SET_SUCCESS                           0x0A01
#define START_DISPLAY_SET_FAILURE                           0x0A02
/* Upper byte - PSS Pump (10) */
#define PSS_PUMP_SET_REQUEST                                0x1000
#define PSS_PUMP_SET_SUCCESS                                0x1001
#define PSS_PUMP_SET_FAILURE                                0x1002
#define PSS_PUMP_GET_REQUEST                                0x1003
#define PSS_PUMP_GET_SUCCESS                                0x1004
#define PSS_PUMP_GET_FAILURE                                0x1005
/* Upper byte - PSS Pressure (11) */
#define PSS_POD_PRESSURE_SET_REQUEST                        0x1100
#define PSS_POD_PRESSURE_SET_SUCCESS                        0x1101
#define PSS_POD_PRESSURE_SET_FAILURE                        0x1102
#define PSS_POD_PRESSURE_GET_REQUEST                        0x1103
#define PSS_POD_PRESSURE_GET_SUCCESS                        0x1104
#define PSS_POD_PRESSURE_GET_FAILURE                        0x1105
/* Upper byte - PSS Pinch Valve (12) */
#define PSS_PINCH_VALVE_SET_REQUEST                         0x1200
#define PSS_PINCH_VALVE_SET_SUCCESS                         0x1201
#define PSS_PINCH_VALVE_SET_FAILURE                         0x1202
#define PSS_PINCH_VALVE_GET_REQUEST                         0x1203
#define PSS_PINCH_VALVE_GET_SUCCESS                         0x1204
#define PSS_PINCH_VALVE_GET_FAILURE                         0x1205
/* Upper byte - PSS Sonoflow (13)*/
#define PSS_SONOFLOW_GET_REQUEST                            0x1300
#define PSS_SONOFLOW_GET_SUCCESS                            0x1301
#define PSS_SONOFLOW_GET_FAILURE                            0x1302
#define PSS_SONOFLOW_SET_REQUEST                            0x1303
#define PSS_SONOFLOW_SET_SUCCESS                            0x1304
#define PSS_SONOFLOW_SET_FAILURE                            0x1305
/* Upper byte - PSS Cannula Blood Meconium (14) */
#define PSS_POD_CANNULA_BMS_GET_REQUEST                     0x1400
#define PSS_POD_CANNULA_BMS_GET_SUCCESS                     0x1401
#define PSS_POD_CANNULA_BMS_GET_FAILURE                     0x1402
#define PSS_POD_CANNULA_BMS_SET_REQUEST                     0x1403
#define PSS_POD_CANNULA_BMS_SET_SUCCESS                     0x1404
#define PSS_POD_CANNULA_BMS_SET_FAILURE                     0x1405
/* Upper byte - PSS Waste Blood Meconium (15) */
#define PSS_POD_WASTE_BMS_GET_REQUEST                       0x1500
#define PSS_POD_WASTE_BMS_GET_SUCCESS                       0x1501
#define PSS_POD_WASTE_BMS_GET_FAILURE                       0x1502
#define PSS_POD_WASTE_BMS_SET_REQUEST                       0x1503
#define PSS_POD_WASTE_BMS_SET_SUCCESS                       0x1504
#define PSS_POD_WASTE_BMS_SET_FAILURE                       0x1505
/* Upper byte - PSS Door (16) */
#define PSS_DOOR_GET_REQUEST                                0x1600
#define PSS_DOOR_GET_SUCCESS                                0x1601
#define PSS_DOOR_GET_FAILURE                                0x1602
#define PSS_DOOR_STATUS_UPDATE_INDICATION                   0x1603
#define PSS_DOOR_SET_REQUEST                                0x1604
#define PSS_DOOR_SET_SUCCESS                                0x1605
#define PSS_DOOR_SET_FAILURE                                0x1606
/* Upper byte - PSS Door (17) */
#define PSS_BAG_GET_REQUEST                                 0x1700
#define PSS_BAG_GET_SUCCESS                                 0x1701
#define PSS_BAG_GET_FAILURE                                 0x1702
#define PSS_BAG_SET_REQUEST                                 0x1703
#define PSS_BAG_SET_SUCCESS                                 0x1704
#define PSS_BAG_SET_FAILURE                                 0x1705
#define PSS_BAG_WEIGHT_REQUEST                              0x1706
#define PSS_BAG_WEIGHT_SUCCESS                              0x1707
#define PSS_BAG_WEIGHT_FAILURE                              0x1708
/* Upper byte - PSS UV Disinfector (18) */
#define PSS_UV_DISINFECTOR_SET_REQUEST                      0x1800
#define PSS_UV_DISINFECTOR_SET_SUCCESS                      0x1801
#define PSS_UV_DISINFECTOR_SET_FAILURE                      0x1802
#define PSS_UV_DISINFECTOR_GET_REQUEST                      0x1803
#define PSS_UV_DISINFECTOR_GET_SUCCESS                      0x1804
#define PSS_UV_DISINFECTOR_GET_FAILURE                      0x1805
/* Upper byte - PSS Drawer LED (19) */
#define PSS_DRAWER_LED_SET_REQUEST                          0x1900
#define PSS_DRAWER_LED_SET_SUCCESS                          0x1901
#define PSS_DRAWER_LED_SET_FAILURE                          0x1902
#define PSS_DRAWER_LED_GET_REQUEST                          0x1903
#define PSS_DRAWER_LED_GET_SUCCESS                          0x1904
#define PSS_DRAWER_LED_GET_FAILURE                          0x1905
/* Upper byte - TH Heater (20)*/
#define TH_HEATER_SET_REQUEST                               0x2000
#define TH_HEATER_SET_SUCCESS                               0x2001
#define TH_HEATER_SET_FAILURE                               0x2002
#define TH_HEATER_GET_REQUEST                               0x2003
#define TH_HEATER_GET_SUCCESS                               0x2004
#define TH_HEATER_GET_FAILURE                               0x2005
/* Upper byte - TH POD Temperature (21) */
#define TH_POD_TEMPERATURE_SET_REQUEST                      0x2100
#define TH_POD_TEMPERATURE_SET_SUCCESS                      0x2101
#define TH_POD_TEMPERATURE_SET_FAILURE                      0x2102
#define TH_POD_TEMPERATURE_GET_REQUEST                      0x2103
#define TH_POD_TEMPERATURE_GET_SUCCESS                      0x2104
#define TH_POD_TEMPERATURE_GET_FAILURE                      0x2105
/* Upper byte - TH POD Canopy Temperature (22) */
#define TH_POD_CANOPY_TEMPERATURE_SET_REQUEST               0x2200
#define TH_POD_CANOPY_TEMPERATURE_SET_SUCCESS               0x2201
#define TH_POD_CANOPY_TEMPERATURE_SET_FAILURE               0x2202
#define TH_POD_CANOPY_TEMPERATURE_GET_REQUEST               0x2203
#define TH_POD_CANOPY_TEMPERATURE_GET_SUCCESS               0x2204
#define TH_POD_CANOPY_TEMPERATURE_GET_FAILURE               0x2205
/* Upper byte - TH Blood Canopy Temperature (23) */
#define TH_BLOOD_CANOPY_TEMPERATURE_SET_REQUEST             0x2300
#define TH_BLOOD_CANOPY_TEMPERATURE_SET_SUCCESS             0x2301
#define TH_BLOOD_CANOPY_TEMPERATURE_SET_FAILURE             0x2302
#define TH_BLOOD_CANOPY_TEMPERATURE_GET_REQUEST             0x2303
#define TH_BLOOD_CANOPY_TEMPERATURE_GET_SUCCESS             0x2304
#define TH_BLOOD_CANOPY_TEMPERATURE_GET_FAILURE             0x2305
/* Upper byte - TH POD Canopy Fan (24) */
#define TH_POD_CANOPY_FAN_SET_REQUEST                       0x2400
#define TH_POD_CANOPY_FAN_SET_SUCCESS                       0x2401
#define TH_POD_CANOPY_FAN_SET_FAILURE                       0x2402
#define TH_POD_CANOPY_FAN_GET_REQUEST                       0x2403
#define TH_POD_CANOPY_FAN_GET_SUCCESS                       0x2404
#define TH_POD_CANOPY_FAN_GET_FAILURE                       0x2405
/* Upper byte - TH Blood Canopy Fan (25) */
#define TH_BLOOD_CANOPY_FAN_SET_REQUEST                     0x2500
#define TH_BLOOD_CANOPY_FAN_SET_SUCCESS                     0x2501
#define TH_BLOOD_CANOPY_FAN_SET_FAILURE                     0x2502
#define TH_BLOOD_CANOPY_FAN_GET_REQUEST                     0x2503
#define TH_BLOOD_CANOPY_FAN_GET_SUCCESS                     0x2504
#define TH_BLOOD_CANOPY_FAN_GET_FAILURE                     0x2505
/* Upper byte - System (30) */
#define SYSTEM_DATE_TIME_SET_REQUEST                        0x3000
#define SYSTEM_DATE_TIME_SET_SUCCESS                        0x3001
#define SYSTEM_DATE_TIME_SET_FAILURE                        0x3002
#define SYSTEM_END_OF_TREATMENT_SET_REQUEST                 0x3003
#define SYSTEM_END_OF_TREATMENT_SET_SUCCESS                 0x3004
#define SYSTEM_END_OF_TREATMENT_SET_FAILURE                 0x3005
#define SYSTEM_SHUTDOWN_SET_REQUEST                         0x3006
#define SYSTEM_SHUTDOWN_SET_SUCCESS                         0x3007
#define SYSTEM_SHUTDOWN_SET_FAILURE                         0x3008
/* Upper byte - SBC (31) */
#define SBC_START_DISPLAY_SET_REQUEST                       0x3100
#define SBC_START_DISPLAY_SET_SUCCESS                       0x3101
#define SBC_START_DISPLAY_SET_FAILURE                       0x3102
#define SBC_BABY_WEIGHT_SET_REQUEST                         0x3103
#define SBC_BABY_WEIGHT_SET_SUCCESS                         0x3104
#define SBC_BABY_WEIGHT_SET_FAILURE                         0x3105
#define SBC_BABY_WEIGHT_GET_REQUEST                         0x3106
#define SBC_BABY_WEIGHT_GET_SUCCESS                         0x3107
#define SBC_BABY_WEIGHT_GET_FAILURE                         0x3108
/* RESERVED */
#define MM_MSG_TYPE_LAST                                    0xFFFF
/*** Message Manager / Message Type definitions - END ***/

/*** Data Log / Event Strings - START ***/
#define DL_SEQ_NUM_STRING_SIZE                              8    /* "00000000" */
#define DL_DATE_STRING_SIZE                                 11   /* "Jan-01-2019" */
#define DL_TIME_STRING_SIZE                                 12   /* "hh:mm:ss.mmm" */
#define DL_BOARD_ID_STRING_MAX                              18   /* "Master Controller " */
#define DL_SS_ID_STRING_MAX                                 20
#define DL_EVENT_MAJOR_STRING_MAX                           20
#define DL_EVENT_MINOR_STRING_MAX                           20
#define DL_VAL_STRING_SIZE                                  10   /* "0x00000000" */
#define DL_NUM_32BIT_VAL                                    10
#define DL_NUM_64BIT_VAL                                    (DL_NUM_32BIT_VAL / 2)
#define DL_STRING_SIZE                                      (DL_NUM_32BIT_VAL * sizeof(uint32_t))
#define DL_BAD_CRC_STRING_SIZE                              8
#define DL_FIELD_SEP_CHARS                                  64   /* For field separation characters */
#define DL_HEADER_SIZE                                      (DL_SEQ_NUM_STRING_SIZE + (DL_DATE_STRING_SIZE * 2) + (DL_TIME_STRING_SIZE * 2) + DL_BOARD_ID_STRING_MAX)
#define DL_TRAILER_SIZE                                     (DL_SS_ID_STRING_MAX + DL_EVENT_MAJOR_STRING_MAX + DL_EVENT_MINOR_STRING_MAX + (DL_NUM_32BIT_VAL * DL_VAL_STRING_SIZE) + DL_BAD_CRC_STRING_SIZE)
#define DL_RECORD_MAX_NUM_BYTES                             (DL_HEADER_SIZE + DL_TRAILER_SIZE + DL_FIELD_SEP_CHARS)
/*** Data Log / Event Strings - END ***/

/*** Data Log Subsystem IDs - START - strings defined in http_server_and_data_log_thread_entry.cpp ***/
#define DL_SS_SYS_CHECK                                     0
#define DL_SS_SENSOR_UPDATE                                 1
#define DL_SS_PRESSURE_MANAGER_UPDATE                       2
#define DL_SS_POD_MANAGER_UPDATE                            3
#define DL_SS_POD_CANOPY_MANAGER_UPDATE                     4
#define DL_SS_BLOOD_CANOPY_MANAGER_UPDATE                   5
#define DL_SS_HEATER_MANAGER_UPDATE                         6
#define DL_SS_GASMIX_UPDATE                                 7
#define DL_SS_SYSTEM_STATE_MACHINE                          8
#define DL_SS_PINCH_VALVE_MANAGER_UPDATE                    9
#define DL_SS_SONOFLOW_SENSOR_MANAGER_UPDATE                10
#define DL_SS_POD_CANNULA_BMS_MANAGER_UPDATE                11
#define DL_SS_POD_WASTE_BMS_MANAGER_UPDATE                  12
#define DL_SS_DOOR_MANAGER_UPDATE                           13
#define DL_SS_BAG_MANAGER_UPDATE                            14
#define DL_SS_BLOOD_GAS_MANAGER_UPDATE                      15
#define DL_SS_UV_DISINFECTOR_MANAGER_UPDATE                 16
#define DL_SS_MM_IN_UPDATE                                  17
#define DL_SS_BLOOD_MANAGER_UPDATE                          18
#define DL_SS_DRAWER_LED_MANAGER_UPDATE                     19
#define DL_SS_ALARM_MANAGER_UPDATE                          20
#define DL_SS_PUMP_MANAGER_UPDATE                           21
#define DL_SS_BATTERY_MANAGER_UPDATE                        22
#define DL_SS_CANOPY_POSITION_MANAGER_UPDATE                23
#define DL_SS_BLOOD_CANOPY_FAN_MANAGER_UPDATE               24
#define DL_SS_POD_CANOPY_FAN_MANAGER_UPDATE                 25
#define DL_SS_POWER_MANAGER_UPDATE                          26
#define DL_SS_WDT                                           27
#define DL_SS_MAX_SUBSYSTEMS                                28
/*** Data Log Subsystem IDs - END ***/

/*** Data Log Event Major - START - strings defined in data_log_defs.cpp ***/
#define DL_EMAJ_SYS_CHECK_SYSTEM                            0
#define DL_EMAJ_SYS_CHECK_POST_START                        1
#define DL_EMAJ_SYS_CHECK_POST_SUCCESS                      2
#define DL_EMAJ_SYS_CHECK_POST_FAILURE                      3
#define DL_EMAJ_SYS_CHECK_THREAD_POST_START                 4
#define DL_EMAJ_SYS_CHECK_THREAD_POST_SUCCESS               5
#define DL_EMAJ_SYS_CHECK_THREAD_POST_FAILURE               6
#define DL_EMAJ_SYS_CHECK_HC_THREAD_TIMEOUT                 7
#define DL_EMAJ_SENSOR_UPDATE_ID                            8
#define DL_EMAJ_PRESSURE_CPID_UPDATE                        9
#define DL_EMAJ_POD_CPID_UPDATE                             10
#define DL_EMAJ_BLOCK_CPID_UPDATE                           11
#define DL_EMAJ_BLOCK1_CPID_UPDATE                          12
#define DL_EMAJ_BLOCK2_CPID_UPDATE                          13
#define DL_EMAJ_OUTLET_CPID_UPDATE                          14
#define DL_EMAJ_OUTLET1_CPID_UPDATE                         15
#define DL_EMAJ_OUTLET2_CPID_UPDATE                         16
#define DL_EMAJ_CANOPY_CPID_UPDATE                          17
#define DL_EMAJ_PSS_BLOCK1_UPDATE                           18
#define DL_EMAJ_PSS_BLOCK2_UPDATE                           19
#define DL_EMAJ_POD_CANOPY_B1_UPDATE                        20
#define DL_EMAJ_POD_CANOPY_B2_UPDATE                        21
#define DL_EMAJ_BLOOD_CANOPY_UPDATE                         22
#define DL_EMAJ_STATE_TRANS                                 23
#define DL_EMAJ_ALICAT_SETPOINT_UPDATE                      24
#define DL_EMAJ_GAS_CALIBRATE_UPDATE                        25
#define DL_EMAJ_RUN_STATE_ENTERED                           26
#define DL_EMAJ_SOURCE_VALVE                                27
#define DL_EMAJ_WASTE_VALVE                                 28
#define DL_EMAJ_BAG_SET_ACTIVE                              29
#define DL_EMAJ_FLOW_MEASURED                               30
#define DL_EMAJ_VALUES_READ                                 31
#define DL_EMAJ_ERROR_READING_SENSOR                        32
#define DL_EMAJ_DOOR_STATE_UPDATE                           33
#define DL_EMAJ_PINCH_VALVE_REQUEST                         34
#define DL_EMAJ_ALL_BAG_SETS_UNAVAIL                        35
#define DL_EMAJ_BAG_SET_UNAVAIL                             36
#define DL_EMAJ_BAG_SET_SELECTION                           37
#define DL_EMAJ_BLOOD_GAS_UPDATE                            38
#define DL_EMAJ_UV1_OPERATION                               39
#define DL_EMAJ_UV2_OPERATION                               40
#define DL_EMAJ_SPI_DEV_0                                   41
#define DL_EMAJ_SPI_DEV_1                                   42
#define DL_EMAJ_GAS_SOLENOID_UPDATE                         43
#define DL_EMAJ_PRESSURE_CALIBRATION                        44
#define DL_EMAJ_MM_IN_CRC_IDLE                              45
#define DL_EMAJ_MM_IN_CRC_FRAME_ERROR                       46
#define DL_EMAJ_MM_IN_CRC_INVALID                           47
#define DL_EMAJ_SSMM_PS_READINESS                           48
#define DL_EMAJ_SSMM_TH_READINESS                           49
#define DL_EMAJ_SSMM_BG_READINESS                           50
#define DL_EMAJ_SSMM_START_DISPLAY_RECEIVED                 51
#define DL_EMAJ_SSMM_RUN_STATE                              52
#define DL_EMAJ_SYSTEM_SHUTDOWN_RECEIVED                    53
#define DL_EMAJ_ALARM_DECLARE                               54
#define DL_EMAJ_ALARM_QUIESCE                               55
#define DL_EMAJ_ALARM_CLEAR                                 56
#define DL_EMAJ_BATTERY_VALUE                               57
#define DL_EMAJ_UV3_OPERATION                               58
#define DL_EMAJ_BLOOD_DOOR                                  59
#define DL_EMAJ_POD_DOOR                                    60
#define DL_EMAJ_FLUID_LEVEL_UPDATE                          61
#define DL_EMAJ_SYSTEM_END_OF_TREATMENT_RECEIVED            62
#define DL_EMAJ_SYS_CHECK_HC_BOARD_TIMEOUT                  63
#define DL_EMAJ_POWER_SIG_2V_048A                           64
#define DL_EMAJ_POWER_SIG_2V_048P                           65
#define DL_EMAJ_POWER_SIG_3P3V                              66
#define DL_EMAJ_POWER_SIG_5V                                67
#define DL_EMAJ_POWER_SIG_5V_A                              68
#define DL_EMAJ_POWER_SIG_10V                               69
#define DL_EMAJ_POWER_SIG_24V                               70
#define DL_EMAJ_WDT_INIT                                    71
#define DL_EMAJ_SSMM_READINESS_WAIT_STATE                   72
#define DL_EMAJ_SSMM_SBC_SYNC_STATE                         73

/*** Data Log Event Major - END ***/

/*** Data Log Event Minor - START - strings defined in data_log_defs.cpp ***/
#define DL_EMIN_SYS_CHECK_STARTUP                           0
#define DL_EMIN_POST_RAM_TEST                               1
#define DL_EMIN_POST_FLASH_TEST                             2
#define DL_EMIN_POST_NAME                                   3
#define DL_EMIN_POST_READY                                  4
#define DL_EMIN_POST_DONE_WAIT                              5
#define DL_EMIN_RUN_READY                                   6
#define DL_EMIN_RUN                                         7
#define DL_EMIN_POST_READY_FAILED_THREAD_STATE              8
#define DL_EMIN_POST_READY_FAILED_TXQ_SEND                  9
#define DL_EMIN_POST_DONE_WAIT_FAILED_INVALID_THREAD_ID_RX  10
#define DL_EMIN_POST_DONE_WAIT_FAILED_MESSAGE_TIMEOUT       11
#define DL_EMIN_POST_DONE_WAIT_FAILED_POST_NOT_SUCCESSFUL   12
#define DL_EMIN_POST_DONE_WAIT_FAILED_UNEXPECTED_MESSAGE    13
#define DL_EMIN_POST_DONE_WAIT_FAILED_TXQ_SEND              14
#define DL_EMIN_POST_DONE_WAIT_FAILED_INVALID_THREAD_STATE  15
#define DL_EMIN_RUN_FAILED_TXQ_SEND                         16
#define DL_EMIN_ECHO_REQUEST_FAILED                         17
#define DL_EMIN_HC_NO_RESP_FROM_THREAD                      18
#define DL_EMIN_SENSOR_UPDATE_REFINED                       19
#define DL_EMIN_PRESSUREM_VALUES                            20
#define DL_EMIN_TEMPERATUREM_BLOCK_VALUES                   21
#define DL_EMIN_TEMPERATUREM_POD_VALUES                     22
#define DL_EMIN_TEMPERATUREM_POD_CANOPY_VALUES              23
#define DL_EMIN_TEMPERATUREM_BLOOD_CANOPY_VALUES            24
#define DL_EMIN_HEATERM_VALUES                              25
#define DL_EMIN_CURRENT_AND_LAST_STATE                      26
#define DL_EMIN_ALICAT_VALUES                               27
#define DL_EMIN_GAS_CALIBRATE_VALUES                        28
#define DL_EMIN_READY                                       29
#define DL_EMIN_SET_ON                                      30
#define DL_EMIN_SET_OFF                                     31
#define DL_EMIN_SET_NUMBER                                  32
#define DL_EMIN_FLOW_UNITS                                  33
#define DL_EMIN_BMS_MEASUREMENTS                            34
#define DL_EMIN_NO_VALUES_AVAILABLE                         35
#define DL_EMIN_DOOR_IS_OPENED                              36
#define DL_EMIN_DOOR_IS_CLOSED                              37
#define DL_EMIN_BAG_SET_SET_FAILURE                         38
#define DL_EMIN_SOURCE_AND_WASTE_PSS                        39
#define DL_EMIN_BLOOD_GAS_VALUES_SENT_TO_UI                 40
#define DL_EMIN_SWEEP_FLOW_VALUES_RECV_FROM_UI              41
#define DL_EMIN_SWEEP_FLOW_VALUES_SENT_TO_UI                42
#define DL_EMIN_ENABLED                                     43
#define DL_EMIN_DISABLED                                    44
#define DL_EMIN_ERROR_CODE                                  45
#define DL_EMIN_ADI_GAS_PERCENTAGE                          46
#define DL_EMIN_MM_IN_SRC_MT                                47
#define DL_EMIN_MM_IN_SRC_MT_MSGCRC_CALCRC                  48
#define DL_EMIN_PRESSURE_CALIBRATION                        49
#define DL_EMIN_BLOOD_SPECTRUM_VALUES_SENT_TO_UI            50
#define DL_EMIN_SSMM_IS_READY                               51
#define DL_EMIN_SSMM_IS_NOT_READY                           52
#define DL_EMIN_SSMM_START_DISPLAY_SUCCESS                  53
#define DL_EMIN_SSMM_START_DISPLAY_FAILURE                  54
#define DL_EMIN_SSMM_STATE_ENTERED                          55
#define DL_EMIN_SYSTEM_SHUTDOWN_RECEIVED                    56
#define DL_EMIN_ALARM_PROCESSED                             57
#define DL_EMIN_ALARM_NOT_PROCESSED                         58
#define DL_EMIN_BATTERY_STATUS_VALUES                       59
#define DL_EMIN_BLOOD_GAS_VALUES_SENT_TO_UI2                60
#define DL_EMIN_SIGH_CALI_SATUS                             61
#define DL_EMIN_BLOOD_GAS_PRESSURE_VALUES_TO_UI             62
#define DL_EMIN_DOOR_OPENED                                 63
#define DL_EMIN_DOOR_CLOSED                                 64
#define DL_EMIN_DOOR_OPENED_ALARM                           65
#define DL_EMIN_LOW_POST_SAT_ALARM                          66
#define DL_EMIN_HIGH_TOTAL_SWEEP_FLOW                       67
#define DL_EMIN_SBC_BG_BABY_WEIGHT                          68
#define DL_EMIN_BG_FLOWVALUE_CHANGE_ALARM                   69
#define DL_EMIN_BATTERY_TIME_REMAINING                      70
#define DL_EMIN_CO2_SETPOINT_TOO_HIGHT                      71
#define DL_EMIN_N2_SETPOINT_TOO_HIGHT                       72
#define DL_EMIN_GASS_CALIBRATE_FAILED                       73
#define DL_EMIN_GAS_BLED_MISMATCH                           74
#define DL_EMIN_SWEEP_FLOW_MISMATCH                         75
#define DL_EMIN_SOURCE_FLUID_LEVEL                          76
#define DL_EMIN_WASTE_FLUID_LEVEL                           77
#define DL_EMIN_SYSTEM_END_OF_TREATMENT_RECEIVED            78
#define DL_EMIN_HC_NO_RESP_FROM_PS_BOARD                    79
#define DL_EMIN_HC_NO_RESP_FROM_TH_BOARD                    80
#define DL_EMIN_HC_NO_RESP_FROM_BG_BOARD                    81
#define DL_EMIN_HC_NO_RESP_FROM_CON_BOARD                   82
#define DL_EMIN_POWER_SIG_IS_GOOD                           83
#define DL_EMIN_POWER_SIG_IS_BAD                            84
#define DL_EMIN_POST_NETWORK_TEST                           85
#define DL_EMIN_WDT_NORMAL                                  86
#define DL_EMIN_WDT_CAUSED_RESET                            87
#define DL_EMIN_WDT_OPEN_ERROR                              88
#define DL_EMIN_WDT_REFRESH_ERROR                           89
/*** Data Log Event Minor - END ***/

/*** Data Log Value Format - START ***/
#define DL_NO_VALUE_FORMAT                                  0               
#define DL_DEC_VALUE_FORMAT                                 1
#define DL_HEX_VALUE_FORMAT                                 2
#define DL_DEC_DOUBLE_VALUE_FORMAT                          3
#define DL_STRING_FORMAT                                    4
#define DL_STATE_CHANGE_FORMAT                              5
#define DL_ALICAT_METER_INFO_FORMAT                         6
#define DL_ALICAT_CONTROLLER_INFO_FORMAT                    7
#define DL_ALARM_INFO_FORMAT                                8


/*** Data Log Values ***/
#define DL_NO_VALUES_SPECIFIED                              0
#define DL_NO_VALUES_PTR                                    (void *)0
/*** Data Log Value Format - END ***/

/* Subsystem specific event logging */
#define DL_SS_SPECIFIC_LOG_MAX                              4

/* Message Type mask */
#define DL_MESSAGE_TYPE_MASK                                0x3FFF

/*** Sensor Data - START ***/
/* Number of sensor data 32-bit entries available in message */
enum sensor_ids
{
/* Thermal Board - ADC (Analog-To-Digital Conversion) Sensor IDs */
    TH_AIN0_POD_CANOPY_BLOCK_TEMP1 = 0,
    TH_AIN1_POD_CANOPY_BLOCK_TEMP2,
    TH_AIN2_POD_CANOPY_OUTLET_TEMP1,
    TH_AIN3_POD_CANOPY_OUTLET_TEMP2,
    TH_AIN4_POD_CANOPY_AIR_TEMP1,
    TH_AIN5_POD_CANOPY_AIR_TEMP2,
    TH_AIN6_BLOOD_CANOPY_BLOCK_TEMP,
    TH_AIN7_BLOOD_CANOPY_OUTLET_TEMP,
    TH_AIN8_BLOOD_CANOPY_AIR_TEMP1,
    TH_AIN9_BLOOD_CANOPY_AIR_TEMP2,
    TH_AIN10_EXTRA1,
    TH_AIN11_EXTRA2,
    TH_AIN12_EXTRA3,
    TH_AIN13_EXTRA4,
    TH_AIN14_EXTRA5,
    TH_AIN15_EXTRA6,
    TH_AIN16_EXTRA7,
    TH_AIN0_PSS_BLOCK_TEMP1,
    TH_AIN1_PSS_BLOCK_TEMP2,
    TH_AIN2_PSS_POST_HEATER_TEMP,
    TH_AIN3_PSS_EOL_TEMP1,
    TH_AIN4_PSS_EOL_TEMP2,
    TH_AIN5_POD_TEMP1,
    TH_AIN6_POD_TEMP2,
    TH_AIN7_POD_TEMP3,
    TH_AIN8_POD_TEMP4,
    TH_AIN9_EXTRA8,
    TH_AIN10_EXTRA9,
    TH_AIN11_UNUSED1,
    TH_AIN12_UNUSED2,
    TH_AIN13_UNUSED3,
    TH_AIN14_UNUSED4,
    TH_AIN15_UNUSED5,
    TH_AIN16_UNUSED6,
/* Physiologic Saline Solution Board - ADC (Analog-To-Digital Conversion) Sensor IDs */
    PS_AIN0_LOAD_CELL6,
    PS_AIN1_LOAD_CELL1,
    PS_AIN2_LOAD_CELL2,
    PS_AIN3_LOAD_CELL3,
    PS_AIN4_POD_PRESSURE4,
    PS_AIN5_POD_PRESSURE3,
    PS_AIN6_POD_PRESSURE2,
    PS_AIN7_POD_PRESSURE1,
    PS_AIN8_LINE_PRESSURE1,
    PS_AIN9_LINE_PRESSURE2,
    PS_AIN10_LINE_PRESSURE3,
    PS_AIN11_LOAD_CELL4,
    PS_AIN12_LOAD_CELL5,
    PS_AIN13_THERMISTOR1,
    PS_AIN14_THERMISTOR2,
    PS_AIN15_UNUSED1,
    PS_AIN16_UNUSED2,
/* Blood & Gas Board - ADC (Analog-To-Digital Conversion) Sensor IDs */
    BG_AIN0_PRE_OXY_CO2,
    BG_AIN1_POST_OXY_CO2,
    BG_AIN2_PRE_OXY_O2,
    BG_AIN3_POST_OXY_O2,
    BG_AIN4_PRESSURE_ARTERIAL,
    BG_AIN5_PRESSURE_VENOUS,
    BG_AIN6_PRESSURE_OFFSET,
    BG_AIN7_UNUSED1,
    BG_AIN8_UNUSED2,
    BG_AIN9_UNUSED3,
    BG_AIN10_UNUSED4,
    BG_AIN11_UNUSED5,
    BG_AIN12_UNUSED6,
    BG_AIN13_UNUSED7,
    BG_AIN14_UNUSED8,
    BG_AIN15_UNUSED9,
    BG_AIN16_UNUSED10,
/* Blood & Gas Board - Gas Measure & Spectrum */
    BG_GAS_MEASURE_ERROR,
    BG_SPECTRUM_WEIGHT,
    BG_SPECTRUM_HB,
    BG_SPECTRUM_PRESAT,
    BG_SPECTRUM_POSTSAT,
/* Physiologic Saline Solution Board - Sonoflow CO.55 Sensor IDs */
    PS_SONOFLOW_FLOW_UL_PER_SEC_S32,
    PS_SONOFLOW_FLOW_ML_PER_MIN_S32,
    PS_SONOFLOW_FLOW_UL_PER_SEC_F32,
    PS_SONOFLOW_FLOW_ML_PER_MIN_F32,
    PS_SONOFLOW_CH1_FLOW_UL_PER_SEC,
    PS_SONOFLOW_CH2_FLOW_UL_PER_SEC,
    PS_SONOFLOW_FLOW_ZERO_ADJ_UL_PER_SEC,
    PS_SONOFLOW_TEMP_IN_CEL,
    PS_SONOFLOW_AVG_TOF_BACKWARDS,
    PS_SONOFLOW_AVG_TOF_FORWARDS,
    PS_SONOFLOW_AVG_TOF,
    PS_SONOFLOW_AVG_TOF_DIF,
    PS_SONOFLOW_TOF_BACKWARDS_1ST_HIT,
    PS_SONOFLOW_TOF_FORWARDS_1ST_HIT,
    PS_SONOFLOW_TOF_BACKWARDS_2ND_HIT,
    PS_SONOFLOW_TOF_FORWARDS_2ND_HIT,
    PS_SONOFLOW_TOF_BACKWARDS_3RD_HIT,
    PS_SONOFLOW_TOF_FORWARDS_3RD_HIT,
    PS_SONOFLOW_TOF_STANDARD_DEVIATION,
    PS_SONOFLOW_ACCUM_VOL_UL_MAX_LIM,
    PS_SONOFLOW_ACCUM_VOL_UL,
    PS_SONOFLOW_VOL_UL_DIF_BEF_VOL_RESET,
    PS_SONOFLOW_VOL_TIME_DIF,
    PS_SONOFLOW_CURRENT_OUTPUT,
    PS_SONOFLOW_FREQUENCY_OUTPUT,
    PS_SONOFLOW_DAC_A_TRIGGER_VAL,
    PS_SONOFLOW_DAC_B_AMP_GAIN,
    PS_SONOFLOW_OUTPUT_FLAGS,
    PS_SONOFLOW_DEVICE_ERROR,
    PS_SONOFLOW_FLOW_MEAS_ERROR,
    PS_SONOFLOW_WARNINGS,
    PS_SONOFLOW_CH1_FLOW_MEAS_ERROR,
    PS_SONOFLOW_CH2_FLOW_MEAS_ERROR,
    PS_SONOFLOW_FLOW_MEAS_MODE,
    PS_SONOFLOW_INT_CLOCK_MAIN_TIME
};
/*** Sensor Data - END ***/

/* Message transfer type */
#define MM_MSG_INT_QUEUE_XFER_ONLY_PAIRED                   0
#define MM_MSG_INT_QUEUE_XFER_ONLY_SYSTEM                   1
#define MM_MSG_THREAD_DIRECT                                2

/* Event Handler registry return codes */
#define MM_MSG_TYPE_REG_SUCCESS                             0
#define MM_MSG_TYPE_REG_NOT_INIT                            1
#define MM_MSG_TYPE_REG_FULL                                2

/* Memory get / sucess */
#define MM_MSG_MEM_GET_SUCCESS                              0

/* Link indexes */
#define MM_MSG_MC_LINK                                      0
#define MM_MSG_PS_LINK                                      1
#define MM_MSG_TH_LINK                                      2
#define MM_MSG_BG_LINK                                      3
#define MM_MSG_CON_LINK                                     4
#define MM_MSG_LINK_MAX                                     5
#define MM_MSG_LINK_UNUSED                                  0xFFFE
#define MM_MSG_UNKNOWN_LINK                                 0xFFFF

/* Board IDs */
#define MM_MC_BOARD_ID                                      0x30
#define MM_PS_BOARD_ID                                      0x31
#define MM_TH_BOARD_ID                                      0x32
#define MM_BG_BOARD_ID                                      0x33
#define MM_CON_BOARD_ID                                     0x34

/* MAC Address */
#define MM_REA_OUI_MAC_H                                    0x00003055
#define MM_USE_OUI_MAC_H                                    MM_REA_OUI_MAC_H /* Temporary - should not use other vendor's OUI */
#define MM_MC_MAC_L                                         0x000076B8
#define MM_PS_MAC_L                                         0x000076C8
#define MM_TH_MAC_L                                         0x000076D8
#define MM_BG_MAC_L                                         0x000076E8
#define MM_UI_MAC_L                                         0x000076F8

/* IP Address */
#define MM_MC_IP_ADDRESS                                    IP_ADDRESS(192,168,0,2)
#define MM_PS_IP_ADDRESS                                    IP_ADDRESS(192,168,0,4)
#define MM_TH_IP_ADDRESS                                    IP_ADDRESS(192,168,0,6)
#define MM_BG_IP_ADDRESS                                    IP_ADDRESS(192,168,0,8)
#define MM_UI_IP_ADDRESS                                    IP_ADDRESS(192,168,0,10)

/* TCP Port */
#define MM_PS_TCP_PORT                                      1000
#define MM_TH_TCP_PORT                                      1001
#define MM_BG_TCP_PORT                                      1002
#define MM_UI_TCP_PORT                                      2003

/* Subnet Mask */
#define SUBNET_MASK                                         0xFFFFFF00

#if (BOARD_ID == MM_PS_BOARD_ID)
#define MM_TCP_PORT                                         MM_PS_TCP_PORT
#define MM_MY_IP_ADDRESS                                    MM_PS_IP_ADDRESS
#define MM_PEER_IP_ADDRESS                                  MM_MC_IP_ADDRESS
#elif (BOARD_ID == MM_TH_BOARD_ID)
#define MM_TCP_PORT                                         MM_TH_TCP_PORT
#define MM_MY_IP_ADDRESS                                    MM_TH_IP_ADDRESS
#define MM_PEER_IP_ADDRESS                                  MM_MC_IP_ADDRESS
#elif (BOARD_ID == MM_BG_BOARD_ID)
#define MM_TCP_PORT                                         MM_BG_TCP_PORT
#define MM_MY_IP_ADDRESS                                    MM_BG_IP_ADDRESS
#define MM_PEER_IP_ADDRESS                                  MM_MC_IP_ADDRESS
#elif (BOARD_ID == MM_CON_BOARD_ID)
#define MM_TCP_PORT                                         MM_UI_TCP_PORT
#define MM_MY_IP_ADDRESS                                    MM_UI_IP_ADDRESS
#define MM_PEER_IP_ADDRESS                                  MM_MC_IP_ADDRESS
#endif

#define DEBUG_SPRINT(s)     g_sf_console0.p_api->write(g_sf_console0.p_ctrl, (uint8_t *)s, TX_TIMER_TICKS_PER_SECOND);
#define DEBUG_DPRINT(d)     { uint8_t debug_dout[64]; sprintf((char *)debug_dout, "%d", d); DEBUG_SPRINT(debug_dout); }
#define DEBUG_3DPRINT(d)    { uint8_t debug_dout[64]; sprintf((char *)debug_dout, "%03d", d); DEBUG_SPRINT(debug_dout); }
#define DEBUG_HPRINT(d)     { uint8_t debug_dout[64]; sprintf((char *)debug_dout, "%08x", d); DEBUG_SPRINT(debug_dout); }
#define DEBUG_4HPRINT(d)    { uint8_t debug_dout[64]; sprintf((char *)debug_dout, "%04x", d); DEBUG_SPRINT(debug_dout); }
#define DEBUG_FPRINT(d)     { uint8_t debug_dout[64]; snprintf((char *)debug_dout, sizeof(debug_dout), "%f", d); DEBUG_SPRINT(debug_dout); }
#define DEBUG_1BHPRINT(d)   { uint8_t debug_dout[64]; sprintf((char *)debug_dout, "%02x", d); DEBUG_SPRINT(debug_dout); }
#define DEBUG_VDPRINT(d)    { uint8_t debug_dout[64]; double df_val; double df_frac; \
                              df_val = (d >= 0 ? d : -d); df_frac = (df_val - (double)((UINT)df_val)) * 1000000000; \
                              sprintf((char *)&debug_dout[0], (d > 0 ? "+" : (d < 0 ? "-" : " "))); \
                              sprintf((char *)&debug_dout[1], "%03u.%09u", (UINT)df_val, (UINT)df_frac); DEBUG_SPRINT(debug_dout); }
#define DEBUG_ODPRINT(d)    { uint8_t debug_dout[32]; double df_val; double df_frac; \
                              df_val = (d >= 0 ? d : -d); df_frac = (df_val - (double)((UINT)df_val)) * 100000; \
                              sprintf((char *)&debug_dout[0], (d > 0 ? "+" : (d < 0 ? "-" : " "))); \
                              sprintf((char *)&debug_dout[1], "%07u.%05u", (UINT)df_val, (UINT)df_frac); DEBUG_SPRINT(debug_dout); }
#define DEBUG_CDPRINT(d)    { uint8_t debug_dout[32]; double df_val; double df_frac; \
                              df_val = (d >= 0 ? d : -d); df_frac = (df_val - (double)((UINT)df_val)) * 1000000000; \
                              sprintf((char *)&debug_dout[0], (d > 0 ? "+" : (d < 0 ? "-" : " "))); \
                              sprintf((char *)&debug_dout[1], "%03u.%09u", (UINT)df_val, (UINT)df_frac); DEBUG_SPRINT(debug_dout); }
#define DEBUG_SFPRINT(d)    { uint8_t debug_dout[32]; double df_val; double df_frac; \
                              df_val = (d >= 0 ? d : -d); df_frac = (df_val - (float)((UINT)df_val)) * 1000; \
                              sprintf((char *)&debug_dout[0], (d > 0 ? "+" : (d < 0 ? "-" : " "))); \
                              sprintf((char *)&debug_dout[1], "%09u.%03u", (UINT)df_val, (UINT)df_frac); DEBUG_SPRINT(debug_dout); }
#define DEBUG_TIMEPRINT(d)  { uint8_t debug_dout[32]; \
                              sprintf((char *)&debug_dout[0], " ("); \
                              sprintf((char *)&debug_dout[2], "%03d:%02d:%02d:%02d", \
                              (int)(d / (60 * 60 * 24)), (int)((d / (60 * 60)) % 24), (int)((d / 60) % 60), (int)(d % 60)); \
                              sprintf((char *)&debug_dout[14], ")"); DEBUG_SPRINT(debug_dout); }
#define DEBUG_SNSPRINT(d)    { uint8_t debug_dout[32]; double df_val; double df_frac; \
                              df_val = (d >= 0 ? d : -d); df_frac = (df_val - (float)((UINT)df_val)) * 1000; \
                              sprintf((char *)&debug_dout[0], (d > 0 ? "+" : (d < 0 ? "-" : " "))); \
                              sprintf((char *)&debug_dout[1], "%03u.%03u", (UINT)df_val, (UINT)df_frac); DEBUG_SPRINT(debug_dout); }
#define DEBUG_PCTPRINT(d)    { uint8_t debug_dout[32]; double df_val; double df_frac; \
                              df_val = (d >= 0 ? d : -d); df_frac = (df_val - (float)((UINT)df_val)) * 100; \
                              sprintf((char *)&debug_dout[0], (d > 0 ? "+" : (d < 0 ? "-" : " "))); \
                              sprintf((char *)&debug_dout[1], "%03u.%02u", (UINT)df_val, (UINT)df_frac); DEBUG_SPRINT(debug_dout); }


#define NETX_PACKET_SIZE_MAX                                1568
#define PAGE_SEND_THRESHOLD                                 (NETX_PACKET_SIZE_MAX / 2)

/* Maximum message size internal to queue */
#define MM_MSG_EXT_FREE_MEM_SUCCESS                         0

/* Minimum and maximum data log file name length */
#define MAX_DL_NAME_LEN                                     32
#define MIN_DL_NAME_LEN                                     8
#define NAME_T1_CHAR_OFFSET                                 3
#define NAME_X_CHAR_OFFSET                                  2
#define NAME_T2_CHAR_OFFSET                                 1

/* Maximum message size internal to queue */
#define MM_MSG_THREADX_MAX_MESSAGE_SIZE                     64 /* (Bytes) THREADX maximum queue supported message size */
#define MM_MSG_CRC_SIZE                                     2 /* CRC size (last 2 bytes of message) */
#define MM_MSG_INT_QUEUE_XFER_MAX                           (MM_MSG_THREADX_MAX_MESSAGE_SIZE - sizeof(mm_xfer_info))
#define MM_MSG_INT_NUM_BYTES_CRC_CALC                       (MM_MSG_INT_QUEUE_XFER_MAX - MM_MSG_CRC_SIZE)
#define MM_MSG_INT_QUEUE_MAX_MSG_BODY                       (MM_MSG_THREADX_MAX_MESSAGE_SIZE - (sizeof(mm_xfer_info) + sizeof(mm_hdr) + MM_MSG_CRC_SIZE))

/* CRC Polynomic*/
#define MM_POLY                                             0x11021

/* CRC is present */
#define MM_MSG_CRC_IDLE                                     0
#define MM_MSG_CRC_ACTIVE                                   1

/* System Check / POST */
#define SC_MAX_POST_START_WAIT                              (60 * TX_TIMER_TICKS_PER_SECOND)
#define SC_MAX_RUN_START_WAIT                               (60 * TX_TIMER_TICKS_PER_SECOND)
#define SC_POST_RUN_HIGH_PRIORITY                           0
#define SC_POST_RUN_LOW_PRIORITY                            15

/* System Check / POST - Data Log */
#define DATA_LOG_SC_NAME                                    "DATA LOG"
#define DATA_LOG_SC_POST_START_PRIORITY                     4
#define DATA_LOG_SC_RUN_START_PRIORITY                      2

/* Message Transfer Format */
/* This contains message transfer information (not transmitted) */
typedef struct
{
    uint16_t xfer_type;
    uint16_t xfer_length;
} mm_xfer_info;

/* This contains the message header (transmitted) */
typedef struct
{
    uint8_t dst;
    uint8_t src;
    struct
    {
        uint16_t msg_type : 14;
        uint16_t reserved : 1;
        uint16_t crc_active : 1;
    } msg_field;
} mm_hdr;

/*** Queue XFER structures for messages - START ***/
/* Must to align on word boundary */
typedef struct
{
    uint32_t message[MM_MSG_THREADX_MAX_MESSAGE_SIZE / 4]; /* Maximum queue message size */
} mm_word_alignment;

/* Structure for messages located internal to queue */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint8_t msg[MM_MSG_INT_QUEUE_MAX_MSG_BODY];
    uint16_t crc16;
} mm_int_queue_msg;

/* Structure for messages located external to queue */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr *msg_ptr;
    uint32_t app_val;
    uint32_t (*mem_free_func_ptr)(uint64_t msg_length, mm_hdr *msg_ptr, uint32_t app_val);
} mm_ext_queue_msg;

/* Structure for System Check message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    union
    {
        struct
        {
            uint16_t seq_num;
            uint32_t sys_clock;
        } echo;
        struct
        {
            uint16_t thread_id;
            uint16_t result;
        } post;
    };
} sys_check_msg;

/* Structure for System Check board health-check message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    union
    {
        struct
        {
            uint16_t post_result;
        } eresp;
    };
} sys_check_board_hc_msg;

/* Structure for Alarm Message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t alarm_id;
    uint16_t action;
    uint8_t board_id;
    uint16_t pri;
    uint16_t aud;
    uint16_t vis;
    bool acked;
    uint32_t quiesce_sec;
} alarm_msg;

//! Audio - Events
enum class AudioEventEnum
{
    play_tone,
    stop_tone,
    sample_done,
    alarm_update,
    test_tone,
    volume_set,
    mute,
    unmute,
    automute
};

//! Audio - Event number
struct AudioEvent
{
    AudioEventEnum event_enum;
};

/* Structure for Audio Message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t aud;
    AudioEvent event;
    uint32_t duration_ms;
    double volume;
} audio_msg;

/* Structure for Visual Message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t vis;
} visual_msg;

/* Structure for Message Manager Outgoing thread direct message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    union
    {
        struct
        {
            uint16_t seq_num;
            uint32_t sys_clock;
        } echo;
        struct
        {
            uint16_t thread_id;
            uint16_t result;
        } post;
    };
} mm_out_msg;

/* Structure for state change */
typedef struct
{
    uint8_t current_state;
    uint8_t last_state;
} manager_state_change_info;

/* Structure for alicat meter info */
typedef struct
{
    char id;
    float flow;
} alicat_meter_info_t;

/* Structure for alicat controller info */
typedef struct
{
    char id;
    float flow;
    float setpoint;
} alicat_controller_info_t;

/* Structure for Data Log message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t subsystem_id;
    uint16_t event_major;
    uint16_t event_minor;
    uint8_t num_values;
    uint8_t value_format;
    union
    {
        uint32_t values_32bit[DL_NUM_32BIT_VAL];
        double values_64bit[DL_NUM_64BIT_VAL];
        char text[DL_STRING_SIZE];
        manager_state_change_info state_change_info;
        alicat_meter_info_t alicat_meter_info;
        alicat_controller_info_t alicat_controller_info;
        char dl_file_name[MAX_DL_NAME_LEN + 1];
    };
    struct
    {
        uint32_t month : 4;
        uint32_t day : 5;
        uint32_t year : 6;
        uint32_t hour : 5;
        uint32_t minute : 6;
        uint32_t second : 6;
    } event_date_time;
    uint16_t millisecond;
} data_log_msg;

/* Structure for Data Log Subsystem Specific message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t num_subsystems;
    uint16_t subsystem[DL_SS_SPECIFIC_LOG_MAX];
} data_log_ss_specific_msg;

/* AIN specific sensor data */
typedef struct
{
    uint32_t conversion_data;
    double voltage;
    double resistance;
    double refined_data;
    uint32_t num_data_samples;
} ain_data_msg;

/* Sonoflow sensor data */
typedef struct
{
    float f32;
    int32_t s32;
    uint32_t u32;
} sonoflow_data_msg;

/* Structure for Sensor Data message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t sensor_id;
    union
    {
        ain_data_msg ain_data;
        sonoflow_data_msg sonoflow_data;
    };
} sensor_data_msg;

/* Enumeration of Sweep Flow Status Codes */
enum class e_sweep_flow_status : uint16_t
{
    success,
    o2_tooLow,
    o2_tooHigh,
    co2_tooLow,
    co2_tooHigh,
    n2_tooLow,
    n2_tooHigh,
    sweep_flow_tooHigh,
    set_failure,
    solenoid_failure,
    alicat_read_failure,
    circuit_break_detected,
};

/* Enumeration of Sweep Flow State Codes */
enum class e_sweep_flow_state : uint16_t
{
    idle,
    normal,
    sigh,
    calibrate,
    error
};

/* Structure for Sweep Flow Set/Response message */
typedef struct{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    int16_t O2_setpoint_x10;
    int16_t CO2_setpoint_x10;
    int16_t N2_setpoint_x10;
    int16_t O2_current_x10;
    int16_t CO2_current_x10;
    int16_t N2_current_x10;
    e_sweep_flow_state state;
    e_sweep_flow_status status;
    float cal_mixO2_percent;
    float cal_mixCO2_percent;
} bg_sweep_flow_msg;

enum class calibrate_id : uint16_t
{
    zero_pressure = 0,
    O2_cal = 1,
    CO2_cal = 2
};

enum class calibrate_status : uint16_t
{
    start = 0,
    calibrating = 1,
    done = 2,
    error = 3
};

/* Structure for Blood Gas System Calibrate message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    calibrate_id id;
    calibrate_status status;
} bg_calibrate_msg;

/* These are the currently supported measurement types */
enum class quantum_measurement_type : uint32_t {
    SO2 = 101,
    Hb = 102,
    Hct = 103,
    Cardiac_Index_Weight = 125
};

/****** Quantum Message Structures Start ******/
typedef struct quantum_measurement_msg_f
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    quantum_measurement_type measurement_type;
	float measurement_value;
	uint8_t socket;
	uint8_t sensor_part;
	uint8_t precision;
	uint8_t units;
	uint32_t alarm_code;
} quantum_measurement_msg;
/****** Quantum Message Structures End ******/

/* Structure for PSS Pump message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t pump_id;
    uint16_t pump_operation;
    uint32_t pump_operation_value;
} pss_pump_msg;

/* Structure for Thermal Heater message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr      hdr;
    uint16_t    heater_operation;
    double      heater_operation_value;
} th_heater_msg;

/* Structure for PSS Sonoflow Sensor message */
typedef struct
{
    union
    {
        int32_t s32;
        uint32_t u32;
        float f32;
    };
} pss_sonoflow_sensor_operation_value;

typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t sensor_id;
    pss_sonoflow_sensor_operation_value sensor_operation_value;
} pss_sonoflow_sensor_msg;

/* Structure for PSS POD Cannula BMS message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t sensor_operation;
    uint32_t num_data_samples;
    uint16_t v_value;
    uint16_t b_value;
    uint16_t g_value;
    uint16_t y_value;
    uint16_t o_value;
    uint16_t r_value;
    uint32_t refined_data;
} pss_pod_cannula_bms_msg;

/* Structure for PSS POD Waste BMS message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t sensor_operation;
    uint32_t num_data_samples;
    uint16_t v_value;
    uint16_t b_value;
    uint16_t g_value;
    uint16_t y_value;
    uint16_t o_value;
    uint16_t r_value;
    uint32_t refined_data;
} pss_pod_waste_bms_msg;

/* Structure for PSS POD Pressure message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t pressure_operation;
    uint16_t state;
    double pod_setpoint_pressure;
    double pod_measured_pressure;
    double eol_temperature;
} pss_pod_pressure_msg;

/* Structure for PSS POD Pressure Pump Info message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t pressure_operation;
    uint32_t pss_pumpm_tmc5161_inlet_pump_vmax;
    uint32_t pss_pumpm_tmc5161_flow;
} pss_pod_pressure_pump_info_msg;


/* Structure for PSS Pinch Valve message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t pinch_valve_id;
    uint16_t pinch_valve_operation;
    uint32_t pinch_valve_on_value;
    uint32_t pinch_valve_stat_value;
    uint32_t pinch_valve_sens_value;
} pss_pinch_valve_msg;

/* Structure for PSS Door message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t door_operation;
    uint32_t door1_value;
    uint32_t door2_value;
    uint32_t door3_value;
} pss_door_msg;

/* Structure for PSS Bag message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t bag_operation;
    uint32_t bag_set1_state;
    uint32_t bag_set2_state;
    uint32_t bag_set3_state;
} pss_bag_msg;

/* Structure for PSS Bag message for weight*/
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t bag_operation;
    double supply_bag_weight;
    double waste_bag_weight;
} pss_bag_weight_msg;

/* Structure for PSS UV Disinfector message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t uv_disinfector_operation;
    uint32_t uv_disinfector_enable;
    uint32_t uv_disinfector_temp_ok;
    uint32_t uv_disinfector_leds_ok;
} pss_uv_disinfector_msg;

/* Structure for PSS Drawer LED message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t operation;
    uint16_t led_state;
    uint8_t reg_addr;
    uint8_t reg_val;
} pss_drawer_led_msg;

/* Structure for Thermal POD Temperature message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t temperature_operation;
    uint16_t state;
    double pod_setpoint_temperature;
    double eol_setpoint_temperature;
    double block_setpoint_temperature;
    double eol_measured_temperature;
    double block_measured_temperature;
} th_pod_temperature_msg;

/* Structure for Thermal POD Temperature CLI Set/Get message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t temperature_operation;
    uint16_t sensor_id;
    double temperature;
    double temperature2;
    double temperature3;
    double temperature4;
    double temperature5;
} th_pod_temperature_cli_msg;

/* Structure for Thermal POD Canopy Temperature message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t temperature_operation;
    uint16_t state;
    uint16_t state_machine;
    uint16_t sensor;    // 1=block, 2=outlet, 3=canopy
    double canopy_sp_or_measured_temperature;
    double outlet_sp_or_measured_temperature;
    double block_sp_or_measured_temperature;
} th_pod_canopy_temperature_msg;

/* Structure for Thermal Blood Canopy Temperature message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t temperature_operation;
    uint16_t state;
    uint16_t sensor;    // 1=block, 2=outlet, 3=canopy
    double canopy_measured_temperature;
    double outlet_measured_temperature;
    double block_measured_temperature;
} th_blood_canopy_temperature_msg;

/* Structure for Thermal Blood Canopy Setpoint message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t temperature_operation;
    uint16_t state;
    double canopy_setpoint_temperature;
    double outlet_setpoint_temperature;
    double block_setpoint_temperature;
} th_blood_canopy_setpoint_msg;

/* Structure for Thermal Canopy Setpoint and Temperature Info message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t temperature_operation;
    double canopy_setpoint_temperature;
    double canopy_measured_temperature;
} th_canopy_info_msg;

/* Structure for Thermal POD Canopy Fan message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t fan_operation;
    union
    {
        uint16_t device_active_value;
        uint16_t fan_direction_value;
        uint16_t fan_rpm;
        struct
        {
            uint16_t fan_reg_addr;
            uint16_t fan_reg_value;
        } reg_op;
        struct
        {
            uint16_t fan_clock_frequency;
            uint16_t fan_timer_unit;
        } clock_op;
        struct
        {
            uint32_t msg_invalid_count;
            uint32_t open_error_count;
            uint32_t write_error_count;
            uint32_t read_error_count;
        } operation_ct;
        struct
        {
            uint32_t open_error_count;
            uint32_t start_error_count;
            uint32_t period_set_error_count;
        } timer_ct;
    };
} th_pod_canopy_fan_msg;

/* Structure for Thermal Blood Canopy Fan message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t fan_operation;
    union
    {
        uint16_t device_active_value;
        uint16_t fan_direction_value;
        uint16_t fan_rpm;
        struct
        {
            uint16_t fan_reg_addr;
            uint16_t fan_reg_value;
        } reg_op;
        struct
        {
            uint16_t fan_clock_frequency;
            uint16_t fan_timer_unit;
        } clock_op;
        struct
        {
            uint32_t msg_invalid_count;
            uint32_t open_error_count;
            uint32_t write_error_count;
            uint32_t read_error_count;
        } operation_ct;
        struct
        {
            uint32_t open_error_count;
            uint32_t start_error_count;
            uint32_t period_set_error_count;
        } timer_ct;
    };
} th_blood_canopy_fan_msg;

typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint32_t year;
    uint16_t month;
    uint16_t day;
    uint16_t hour;
    uint16_t minute;
    uint16_t second;
    uint32_t millisecond;
} sys_notify_set_date_time_msg;

#define DL_EVENT_MESSAGE_MAX (sizeof(data_log_msg) - sizeof(mm_xfer_info))
#define DL_EVENT_MESSAGE_MIN (DL_EVENT_MESSAGE_MAX - sizeof(uint8_t) + (DL_NUM_32BIT_VAL * sizeof(uint32_t)))

typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint8_t msg[MM_MSG_INT_QUEUE_MAX_MSG_BODY];
    uint16_t crc16;
} ssmm_overlay_msg;

typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint8_t msg[MM_MSG_INT_QUEUE_MAX_MSG_BODY];
    uint16_t crc16;
} battery_overlay_msg;

typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t FiO2;
    uint16_t FiCO2;
    uint16_t FeO2;
    uint16_t FeCO2;
    uint32_t O2_consumption_x10;
    uint32_t O2_consumption_per_kg_x10;
    uint32_t CO2_production_x10;
    uint32_t CO2_production_per_kg_x10;
    uint16_t RQ_x100;
} bg_gas_values_msg;

/* Structure for Blood Gas values related to blood pressure */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t bpm;
    uint16_t systolic;
    uint16_t diastolic;
    uint16_t PreMAP;
    uint16_t PostMAP;
    uint16_t PreMinusPost;
    uint16_t FlowMAPRatio_x10;
    uint16_t O2_resistance_x10;
} bg_pressure_values_msg;

/* Structure for Blood Gas arterial pressure points */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint32_t time_ms;
    int32_t pressure_mmHg_x10;
} bg_pressure_point_msg;

/* Structure for Blood Gas baby weight message */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint32_t baby_weight_g; /* Range: 0000 - 9999.  Increments of: 1 gram */
} bg_baby_weight_msg;

/* Structure for BG Sonoflow Sensor message (both Set & Get Request and Status Response) */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    int32_t flow_current;
    int32_t flow_mean;
    int32_t flow_per_kg;
} bg_sonoflow_sensor_msg;

/* Structure for Blood Gas values related to the Spectrum */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint16_t O2_extraction;
    uint16_t O2_delivery_x10;
    uint16_t O2_delivery_per_kg_x10;
    uint16_t PreSAT;
    uint16_t PostSAT;
    uint16_t Hb;
} bg_spectrum_gas_values_msg;

/* Structure for Battery values related to the UPS */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr hdr;
    uint8_t battery_condition;
    uint8_t battery_status;
    uint8_t battery_charge_status;
    uint32_t battery_Seconds;
    uint16_t battery_minutes_remaining;
    uint16_t battery_charge_remaining;
    uint16_t battery_voltage;
    uint16_t battery_temperature;
    uint16_t battery_level_percent;
} mc_battery_values_msg;

/* Enum for the light types */
enum class LightType : uint8_t
{
    visible,
    infrared
};

/* Structure for message to control lights */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr      hdr;
    LightType   light_type;
    uint8_t     duty_cycle;
} mc_light_msg;

/* Structure for response to mc_light_msg */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr      hdr;
    LightType   light_type;
    uint16_t   status;
} mc_light_rsp_msg;

/* Structure for power_msg */
typedef struct
{
    mm_xfer_info xfer_info;
    mm_hdr      hdr;
} power_msg;

/* Message Manager union of all messages */ 
typedef struct
{
    union
    {
        mm_word_alignment               word;
        mm_int_queue_msg                inter;
        mm_ext_queue_msg                exter;
        sys_check_msg                   sys_check;
        sys_check_board_hc_msg          sys_check_board_hc;
        alarm_msg                       alarm;
        audio_msg                       audio;
        visual_msg                      visual;
        mm_out_msg                      mm_out;
        data_log_msg                    dlog;
        data_log_ss_specific_msg        dlog_ss_specific;
        sensor_data_msg                 sensor_data;
        th_heater_msg                   th_heater;  
        th_pod_temperature_msg          th_pod_temperature;
        th_pod_temperature_cli_msg      th_pod_temperature_set;
        th_pod_canopy_temperature_msg   th_pod_canopy_temperature;
        th_blood_canopy_temperature_msg th_blood_canopy_temperature;
        th_blood_canopy_setpoint_msg    th_blood_canopy_setpoint;
        th_canopy_info_msg              th_canopy_info;
        th_pod_canopy_fan_msg           th_pod_canopy_fan;
        th_blood_canopy_fan_msg         th_blood_canopy_fan;
        pss_pump_msg                    pss_pump;
        pss_sonoflow_sensor_msg         pss_sonoflow_sensor;
        pss_pod_cannula_bms_msg         pss_pod_cannula_bms;
        pss_pod_waste_bms_msg           pss_pod_waste_bms;
        pss_pod_pressure_msg            pss_pod_pressure;
        pss_pod_pressure_pump_info_msg  pss_pod_pressure_pump_info;
        pss_pinch_valve_msg             pss_pinch_valve;
        pss_door_msg                    pss_door;
        pss_bag_msg                     pss_bag;
        pss_bag_weight_msg              pss_bag_weight;
        pss_uv_disinfector_msg          pss_uv_disinfector;
        pss_drawer_led_msg              pss_drawer_led;
        sys_notify_set_date_time_msg    sys_notify_set_date_time;
        quantum_measurement_msg         quantum_measurement;
        bg_sweep_flow_msg               bg_sweep_flow;
        bg_calibrate_msg                bg_calibrate;
        bg_gas_values_msg               bg_gas_values;
        bg_pressure_values_msg          bg_pressure_values;
        bg_sonoflow_sensor_msg          bg_sonoflow_sensor;
        bg_spectrum_gas_values_msg      bg_spectrum_gas_values;
        bg_pressure_point_msg           bg_pressure_point;
        bg_baby_weight_msg              bg_baby_weight;
        ssmm_overlay_msg                ssmm_overlay;
        battery_overlay_msg             battery_overlay;
        mc_battery_values_msg           mc_battery_values;
        mc_light_msg                    mc_light;
        mc_light_rsp_msg                mc_light_response;
        power_msg                       power;
    };
} mm_queue_msg;
/*** Queue XFER structures for messages - END ***/

#endif /* MESSAGES_H_ */
