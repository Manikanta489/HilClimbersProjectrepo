/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LRLM_ECU0.h
 *
 * Code generated for Simulink model 'LRLM_ECU0'.
 *
 * Model version                  : 1.131
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Aug 27 01:23:28 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LRLM_ECU0_h_
#define RTW_HEADER_LRLM_ECU0_h_
#ifndef LRLM_ECU0_COMMON_INCLUDES_
#define LRLM_ECU0_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* LRLM_ECU0_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T Merge;                        /* '<S14>/Merge' */
  real_T Merge_o;                      /* '<S11>/Merge' */
  int32_T clockTickCounter;            /* '<S14>/Pulse Generator' */
  int32_T clockTickCounter_d;          /* '<S11>/Pulse Generator' */
  int32_T clockTickCounter_l;          /* '<S20>/Pulse Generator' */
  int32_T clockTickCounter_o;          /* '<S17>/Pulse Generator' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T brake_input;                  /* '<Root>/brake_input' */
  real_T steering_angle;               /* '<Root>/steering_angle' */
  real_T hazard_switch_input;          /* '<Root>/hazard_status' */
  real_T key_input;                    /* '<Root>/key_input' */
  real_T gear_input;                   /* '<Root>/gear_input' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T brake_light_output;           /* '<Root>/brake_light_output' */
  real_T right_indicator_light_output;
                                     /* '<Root>/right_indicator_light_output' */
  real_T left_indicator_light_output; /* '<Root>/left_indicator_light_output' */
  real_T hazard_light_output;          /* '<Root>/hazard_light_output' */
  real_T park_lights_output;           /* '<Root>/park_lights_output' */
  real_T reverse_lights_output;        /* '<Root>/reverse_lights_output' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void LRLM_ECU0_initialize(void);
extern void LRLM_ECU0_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S17>/bool_twenty' : Eliminate redundant data type conversion
 * Block '<S17>/bool_twentyone' : Eliminate redundant data type conversion
 * Block '<S20>/bool_twenty' : Eliminate redundant data type conversion
 * Block '<S20>/bool_twentyone' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('HilClimber_Integrated_V6/main_ECU/LRLM_ECU')    - opens subsystem HilClimber_Integrated_V6/main_ECU/LRLM_ECU
 * hilite_system('HilClimber_Integrated_V6/main_ECU/LRLM_ECU/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'HilClimber_Integrated_V6/main_ECU'
 * '<S1>'   : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU'
 * '<S2>'   : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/brake_system'
 * '<S3>'   : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/hazard_light_system'
 * '<S4>'   : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/indicator_system'
 * '<S5>'   : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/park_light_system'
 * '<S6>'   : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/reverse_light_system'
 * '<S7>'   : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/brake_system/brake_light_output_decider'
 * '<S8>'   : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/hazard_light_system/hazard_light_output_decider'
 * '<S9>'   : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/indicator_system/left_indicator_system'
 * '<S10>'  : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/indicator_system/right_indicator_system'
 * '<S11>'  : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/indicator_system/left_indicator_system/left_indictator_light_output_decider'
 * '<S12>'  : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/indicator_system/left_indicator_system/left_indictator_light_output_decider/If Action Subsystem'
 * '<S13>'  : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/indicator_system/left_indicator_system/left_indictator_light_output_decider/If Action Subsystem1'
 * '<S14>'  : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/indicator_system/right_indicator_system/right_indictator_light_output_decider'
 * '<S15>'  : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/indicator_system/right_indicator_system/right_indictator_light_output_decider/If Action Subsystem'
 * '<S16>'  : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/indicator_system/right_indicator_system/right_indictator_light_output_decider/If Action Subsystem1'
 * '<S17>'  : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/park_light_system/park_gear_lights_output_decider'
 * '<S18>'  : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/park_light_system/park_gear_lights_output_decider/Compare To Constant'
 * '<S19>'  : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/park_light_system/park_gear_lights_output_decider/Compare To Constant1'
 * '<S20>'  : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/reverse_light_system/reverse_lights_output_decider'
 * '<S21>'  : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/reverse_light_system/reverse_lights_output_decider/Compare To Constant'
 * '<S22>'  : 'HilClimber_Integrated_V6/main_ECU/LRLM_ECU/reverse_light_system/reverse_lights_output_decider/Compare To Constant1'
 */
#endif                                 /* RTW_HEADER_LRLM_ECU0_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
