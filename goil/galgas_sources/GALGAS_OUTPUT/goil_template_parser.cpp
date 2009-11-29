//---------------------------------------------------------------------------*
//                                                                           *
//                     File 'goil_template_parser.cpp'                       *
//                        Generated by version 1.9.5                         *
//                     november 26th, 2009, at 13h8'5"                       *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*

#include "version_libpm.h"
#if LIBPM_VERSION != 614
  #error "This file has been compiled with a version of GALGAS different than the version of libpm"
#endif

//---------------------------------------------------------------------------*

#include <typeinfo>
#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "galgas/C_galgas_CLI_Options.h"
#include "goil_template_parser.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_template_parser.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//         Implementation of production rule 'template_instruction'          *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_template_parser::
pr_template_instruction_goil_template_parser_62_27_ (goil_template_scanner & inLexique,
                                const GGS_string var_cas_inPrefix,
                                const GGS_string var_cas_inPath,
                                GGS_goilTemplateVariableMap  &var_cas_ioTemplateVariableMap,
                                GGS_string &var_cas_ioResultingString) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1__21_) COMMA_HERE) ;
  GGS_goilTemplateValue var_cas_expression ;
  GGS_goilTemplateType var_cas_resultType ;
  nt_expression_ (inLexique, var_cas_inPrefix, var_cas_inPath, var_cas_ioTemplateVariableMap, var_cas_expression, var_cas_resultType) ;
  const GGS_bool cond_2971 = (var_cas_resultType).operator_isNotEqual (GGS_goilTemplateType::constructor_stringType (inLexique COMMA_HERE)) ;
  if (cond_2971.isBuiltAndTrue ()) {
    GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, ((GGS_string ("only a string expression can be emitted (it has ")).operator_concat (var_cas_resultType.reader_messageGoilTemplateType (inLexique COMMA_SOURCE_FILE_AT_LINE (80)))).operator_concat (GGS_string (" type")) COMMA_SOURCE_FILE_AT_LINE (81)) ;
  }
  var_cas_ioResultingString.dotAssign_operation (var_cas_expression.reader_mStringValue (inLexique COMMA_SOURCE_FILE_AT_LINE (82))) ;
}

//---------------------------------------------------------------------------*

void goil_template_parser::
pr_template_instruction_goil_template_parser_62_27_parse (goil_template_scanner & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1__21_) COMMA_HERE) ;
  nt_expression_parse (inLexique) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//         Implementation of production rule 'template_instruction'          *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_template_parser::
pr_template_instruction_goil_template_parser_87_27_ (goil_template_scanner & inLexique,
                                const GGS_string var_cas_inPrefix,
                                const GGS_string var_cas_inPath,
                                GGS_goilTemplateVariableMap  &var_cas_ioTemplateVariableMap,
                                GGS_string &var_cas_ioResultingString) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_template) COMMA_HERE) ;
  GGS_lstring  var_cas_templateName ;
  inLexique.assignFromAttribute_tokenString (var_cas_templateName) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_identifier) COMMA_HERE) ;
  ::routine_goilTemplateInvocation (inLexique,  var_cas_templateName,  var_cas_inPrefix,  var_cas_inPath,  var_cas_ioTemplateVariableMap,  var_cas_ioResultingString COMMA_SOURCE_FILE_AT_LINE (95)) ;
}

//---------------------------------------------------------------------------*

void goil_template_parser::
pr_template_instruction_goil_template_parser_87_27_parse (goil_template_scanner & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_template) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_identifier) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//         Implementation of production rule 'template_instruction'          *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_template_parser::
pr_template_instruction_goil_template_parser_106_27_ (goil_template_scanner & inLexique,
                                const GGS_string /* var_cas_inPrefix */,
                                const GGS_string /* var_cas_inPath */,
                                GGS_goilTemplateVariableMap  &var_cas_ioTemplateVariableMap,
                                GGS_string &var_cas_ioResultingString) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1__3F_) COMMA_HERE) ;
  GGS_lstring  var_cas_columnConstantName ;
  inLexique.assignFromAttribute_tokenString (var_cas_columnConstantName) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_identifier) COMMA_HERE) ;
  GGS_string var_cas_value = GGS_string ("") ;
  GGS_bool var_cas_searchEndOfLine = GGS_bool (true) ;
  GGS_uint  var_cas_idx = var_cas_ioResultingString.reader_length () ;
  GGS_uint _variant_4099 = var_cas_ioResultingString.reader_length () ;
  GGS_bool _condition_4099 (_variant_4099.isBuilt (), true) ;
  while (_condition_4099.isBuiltAndTrue ()) {
    _condition_4099 = ((var_cas_idx).operator_strictSup (GGS_uint (0U))).operator_and (var_cas_searchEndOfLine) ;
    if (_condition_4099.isBuiltAndTrue ()) {
      if (_variant_4099.uintValue () == 0) {
        inLexique.onTheFlyRunTimeError ("loop variant error" COMMA_SOURCE_FILE_AT_LINE (125)) ;
        _condition_4099 = GGS_bool (false) ;
      }else{
        _variant_4099.decrement_operation (inLexique COMMA_HERE) ;
        var_cas_searchEndOfLine = (var_cas_ioResultingString.reader_characterAtIndex (inLexique, var_cas_idx.substract_operation (inLexique, GGS_uint (1U) COMMA_SOURCE_FILE_AT_LINE (120)) COMMA_SOURCE_FILE_AT_LINE (120))).operator_isNotEqual (GGS_char (TO_UNICODE ('\n'))) ;
        var_cas_idx.decrement_operation (inLexique COMMA_SOURCE_FILE_AT_LINE (121)) ;
        const GGS_bool cond_4088 = var_cas_searchEndOfLine ;
        if (cond_4088.isBuiltAndTrue ()) {
          var_cas_value.appendCString (" ") ;
        }
      }
    }
  }
  var_cas_ioTemplateVariableMap.modifier_insertKey (inLexique, var_cas_columnConstantName, GGS_goilTemplateType::constructor_stringType (inLexique COMMA_HERE), GGS_goilTemplateValue::constructor_new (GGS_uint64 (0ULL), var_cas_value, GGS_goilTemplateFieldMapList ::constructor_emptyList ()) COMMA_SOURCE_FILE_AT_LINE (126)) ;
}

//---------------------------------------------------------------------------*

void goil_template_parser::
pr_template_instruction_goil_template_parser_106_27_parse (goil_template_scanner & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1__3F_) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_identifier) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//         Implementation of production rule 'template_instruction'          *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_template_parser::
pr_template_instruction_goil_template_parser_181_27_ (goil_template_scanner & inLexique,
                                const GGS_string var_cas_inPrefix,
                                const GGS_string var_cas_inPath,
                                GGS_goilTemplateVariableMap  &var_cas_ioTemplateVariableMap,
                                GGS_string &var_cas_ioResultingString) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_if) COMMA_HERE) ;
  GGS_bool var_cas_currentCondition = GGS_bool (false) ;
  { bool syntaxRepeat_0 = true ;
    while (syntaxRepeat_0) {
        if (((var_cas_currentCondition).operator_not ()).isBuiltAndTrue ()) {
          GGS_goilTemplateValue var_cas_expression ;
          GGS_goilTemplateType var_cas_expressionType ;
          nt_expression_ (inLexique, var_cas_inPrefix, var_cas_inPath, var_cas_ioTemplateVariableMap, var_cas_expression, var_cas_expressionType) ;
          const GGS_bool cond_6301 = (var_cas_expressionType).operator_isNotEqual (GGS_goilTemplateType::constructor_boolType (inLexique COMMA_HERE)) ;
          if (cond_6301.isBuiltAndTrue ()) {
            GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("the operand of the 'not' operator should be boolean") COMMA_SOURCE_FILE_AT_LINE (203)) ;
          }
          var_cas_currentCondition = (var_cas_expression.reader_mUnsigned64Value (inLexique COMMA_SOURCE_FILE_AT_LINE (204))).operator_isEqual (GGS_uint64 (1ULL)) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_then) COMMA_HERE) ;
          if ((var_cas_currentCondition).isBuiltAndTrue ()) {
            nt_template_instruction_list_ (inLexique, var_cas_inPrefix, var_cas_inPath, var_cas_ioTemplateVariableMap, var_cas_ioResultingString) ;
          }else{
            nt_template_instruction_list_parseAndResetTemplateString (inLexique) ;
          }
        }else{
          nt_expression_parse (inLexique) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_then) COMMA_HERE) ;
          nt_template_instruction_list_parseAndResetTemplateString (inLexique) ;
        }
      switch (select_goil_template_parser_0 (inLexique)) {
        case 2 : {
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_elsif) COMMA_HERE) ;
          } break ;
        default :
          syntaxRepeat_0 = false ;
          break ;
      }
    }
  }
  switch (select_goil_template_parser_1 (inLexique)) {
    case 1 : {
      } break ;
    case 2 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_else) COMMA_HERE) ;
      if (((var_cas_currentCondition).operator_not ()).isBuiltAndTrue ()) {
        nt_template_instruction_list_ (inLexique, var_cas_inPrefix, var_cas_inPath, var_cas_ioTemplateVariableMap, var_cas_ioResultingString) ;
      }else{
        nt_template_instruction_list_parseAndResetTemplateString (inLexique) ;
      }
      } break ;
    default :
      break ;
  }
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_end) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_if) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*

void goil_template_parser::
pr_template_instruction_goil_template_parser_181_27_parse (goil_template_scanner & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_if) COMMA_HERE) ;
  { bool syntaxRepeat_0 = true ;
    while (syntaxRepeat_0) {
          nt_expression_parse (inLexique) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_then) COMMA_HERE) ;
          nt_template_instruction_list_parse (inLexique) ;
      switch (select_goil_template_parser_0 (inLexique)) {
        case 2 : {
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_elsif) COMMA_HERE) ;
          } break ;
        default :
          syntaxRepeat_0 = false ;
          break ;
      }
    }
  }
  switch (select_goil_template_parser_1 (inLexique)) {
    case 1 : {
      } break ;
    case 2 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_else) COMMA_HERE) ;
        nt_template_instruction_list_parse (inLexique) ;
      } break ;
    default :
      break ;
  }
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_end) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_if) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//      Implementation of production rule 'template_instruction_list'        *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_template_parser::
pr_template_instruction_list_goil_template_parser_248_33_ (goil_template_scanner & inLexique,
                                const GGS_string var_cas_inPrefix,
                                const GGS_string var_cas_inPath,
                                const GGS_goilTemplateVariableMap  var_cas_inTemplateVariableMap,
                                GGS_string &var_cas_ioResultingString) {
  GGS_goilTemplateVariableMap  var_cas_templateVariableMap = var_cas_inTemplateVariableMap ;
  var_cas_ioResultingString.dotAssign_operation (GGS_lstring ::constructor_retrieveAndResetTemplateString (inLexique COMMA_HERE).ggs_string ()) ;
  { bool syntaxRepeat_2 = true ;
    while (syntaxRepeat_2) {
      switch (select_goil_template_parser_2 (inLexique)) {
        case 2 : {
          nt_template_instruction_ (inLexique, var_cas_inPrefix, var_cas_inPath, var_cas_templateVariableMap, var_cas_ioResultingString) ;
          var_cas_ioResultingString.dotAssign_operation (GGS_lstring ::constructor_retrieveAndResetTemplateString (inLexique COMMA_HERE).ggs_string ()) ;
          } break ;
        default :
          syntaxRepeat_2 = false ;
          break ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

void goil_template_parser::
pr_template_instruction_list_goil_template_parser_248_33_parseAndResetTemplateString (goil_template_scanner & inLexique) {
  { bool syntaxRepeat_2 = true ;
    while (syntaxRepeat_2) {
      switch (select_goil_template_parser_2 (inLexique)) {
        case 2 : {
          nt_template_instruction_parse (inLexique) ;
          } break ;
        default :
          syntaxRepeat_2 = false ;
          break ;
      }
    }
  }
  GGS_lstring  var_cas_s = GGS_lstring ::constructor_retrieveAndResetTemplateString (inLexique COMMA_HERE) ;
}

//---------------------------------------------------------------------------*

void goil_template_parser::
pr_template_instruction_list_goil_template_parser_248_33_parse (goil_template_scanner & inLexique) {
  { bool syntaxRepeat_2 = true ;
    while (syntaxRepeat_2) {
      switch (select_goil_template_parser_2 (inLexique)) {
        case 2 : {
          nt_template_instruction_parse (inLexique) ;
          } break ;
        default :
          syntaxRepeat_2 = false ;
          break ;
      }
    }
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//      Implementation of production rule 'goil_template_start_symbol'       *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_template_parser::
pr_goil_template_start_symbol_goil_template_parser_277_34_ (goil_template_scanner & inLexique,
                                const GGS_string var_cas_inPrefix,
                                const GGS_string var_cas_inPath,
                                const GGS_goilTemplateVariableMap  var_cas_inTemplateVariableMap,
                                GGS_string &var_cas_ioResultingString) {
  nt_template_instruction_list_ (inLexique, var_cas_inPrefix, var_cas_inPath, var_cas_inTemplateVariableMap, var_cas_ioResultingString) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//         Implementation of production rule 'template_instruction'          *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_template_parser::
pr_template_instruction_goil_template_parser_293_27_ (goil_template_scanner & inLexique,
                                const GGS_string var_cas_inPrefix,
                                const GGS_string var_cas_inPath,
                                GGS_goilTemplateVariableMap  &var_cas_ioTemplateVariableMap,
                                GGS_string &var_cas_ioResultingString) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_foreach) COMMA_HERE) ;
  GGS_uint  var_cas_shortestListLentgh = GGS_uint ::constructor_max (inLexique COMMA_HERE) ;
  GGS_goilTemplateEnumationList  var_cas_enumerationList = GGS_goilTemplateEnumationList ::constructor_emptyList () ;
  { bool syntaxRepeat_3 = true ;
    while (syntaxRepeat_3) {
        GGS_goilTemplateValue var_cas_enumeratedValue ;
        GGS_goilTemplateType var_cas_expressionType ;
        nt_expression_ (inLexique, var_cas_inPrefix, var_cas_inPath, var_cas_ioTemplateVariableMap, var_cas_enumeratedValue, var_cas_expressionType) ;
        const GGS_bool cond_9015 = (var_cas_expressionType).operator_isNotEqual (GGS_goilTemplateType::constructor_listType (inLexique COMMA_HERE)) ;
        if (cond_9015.isBuiltAndTrue ()) {
          GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("only a list can be enumerated") COMMA_SOURCE_FILE_AT_LINE (314)) ;
        }else if (cond_9015.isBuiltAndFalse ()) {
          const GGS_bool cond_9162 = (var_cas_shortestListLentgh).operator_strictSup (var_cas_enumeratedValue.reader_mMapListValue (inLexique COMMA_SOURCE_FILE_AT_LINE (314)).reader_length ()) ;
          if (cond_9162.isBuiltAndTrue ()) {
            var_cas_shortestListLentgh = var_cas_enumeratedValue.reader_mMapListValue (inLexique COMMA_SOURCE_FILE_AT_LINE (315)).reader_length () ;
          }
        }
        GGS_string var_cas_foreachPrefix ;
        switch (select_goil_template_parser_4 (inLexique)) {
          case 1 : {
            var_cas_foreachPrefix = GGS_string ("") ;
            } break ;
          case 2 : {
            inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_prefixedby) COMMA_HERE) ;
            GGS_lstring  var_cas_prefixString ;
            inLexique.assignFromAttribute_tokenString (var_cas_prefixString) ;
            inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_identifier) COMMA_HERE) ;
            var_cas_foreachPrefix = var_cas_prefixString.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (323)) ;
            } break ;
          default :
            break ;
        }
        var_cas_enumerationList.addAssign_operation (var_cas_enumeratedValue, var_cas_foreachPrefix) ;
      switch (select_goil_template_parser_3 (inLexique)) {
        case 2 : {
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1__2C_) COMMA_HERE) ;
          } break ;
        default :
          syntaxRepeat_3 = false ;
          break ;
      }
    }
  }
  switch (select_goil_template_parser_5 (inLexique)) {
    case 1 : {
      } break ;
    case 2 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_before) COMMA_HERE) ;
      if (((var_cas_shortestListLentgh).operator_strictSup (GGS_uint (0U))).isBuiltAndTrue ()) {
        nt_template_instruction_list_ (inLexique, var_cas_inPrefix, var_cas_inPath, var_cas_ioTemplateVariableMap, var_cas_ioResultingString) ;
      }else{
        nt_template_instruction_list_parseAndResetTemplateString (inLexique) ;
      }
      } break ;
    default :
      break ;
  }
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_do) COMMA_HERE) ;
  GGS_uint  var_cas_idx = GGS_uint (0U) ;
  GGS_uint _variant_10901 = var_cas_shortestListLentgh ;
  const C_parsingContext context_10901 = inLexique.parsingContext () ;
  nt_template_instruction_list_parse (inLexique) ;
  switch (select_goil_template_parser_6 (inLexique)) {
    case 1 : {
      } break ;
    case 2 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_between) COMMA_HERE) ;
        nt_template_instruction_list_parse (inLexique) ;
      } break ;
    default :
      break ;
  }
  GGS_bool _condition_10901 ;
  if (_variant_10901.isBuilt ()) {
    _condition_10901 = (var_cas_idx).operator_strictInf (var_cas_shortestListLentgh) ;
  }
  while (_condition_10901.isBuiltAndTrue ()) {
    inLexique.setParsingContext (context_10901) ;
    if (_variant_10901.uintValue () == 0) {
      inLexique.onTheFlyRunTimeError ("loop variant error" COMMA_SOURCE_FILE_AT_LINE (383)) ;
      _condition_10901 = GGS_bool (false) ;
    }else{
      _variant_10901.decrement_operation (inLexique COMMA_HERE) ;
      GGS_goilTemplateVariableMap  var_cas_templateVariableMap = var_cas_ioTemplateVariableMap ;
      {
        GGS_goilTemplateEnumationList::cEnumerator enumerator_10005 (var_cas_enumerationList, true) ;
        const GGS_goilTemplateEnumationList::cElement * operand_10005 = NULL ;
        while (((operand_10005 = enumerator_10005.nextObject ()))) {
          macroValidPointer (operand_10005) ;
          const GGS_goilTemplateFieldMap  var_cas_fieldMap = operand_10005->mEnumeratedValue.reader_mMapListValue (inLexique COMMA_SOURCE_FILE_AT_LINE (352)).reader_mMapAtIndex (inLexique, var_cas_idx COMMA_SOURCE_FILE_AT_LINE (352)) ;
          {
            GGS_goilTemplateFieldMap::cEnumerator enumerator_10131 (var_cas_fieldMap, true) ;
            const GGS_goilTemplateFieldMap::cElement * operand_10131 = NULL ;
            while (((operand_10131 = enumerator_10131.nextObject ()))) {
              macroValidPointer (operand_10131) ;
              var_cas_templateVariableMap.modifier_insertKey (inLexique, GGS_lstring ::constructor_new (inLexique, (operand_10005->mPrefix).operator_concat (operand_10131->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (355))), operand_10131->mKey.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (355)) COMMA_HERE), operand_10131->mInfo.mType, GGS_goilTemplateValue::constructor_new (operand_10131->mInfo.mUnsigned64Value, operand_10131->mInfo.mStringValue, GGS_goilTemplateFieldMapList ::constructor_emptyList ()) COMMA_SOURCE_FILE_AT_LINE (354)) ;
            }
          }
        }
      }
      nt_template_instruction_list_ (inLexique, var_cas_inPrefix, var_cas_inPath, var_cas_templateVariableMap, var_cas_ioResultingString) ;
      var_cas_idx.increment_operation (inLexique COMMA_SOURCE_FILE_AT_LINE (367)) ;
      switch (select_goil_template_parser_6 (inLexique)) {
        case 1 : {
          } break ;
        case 2 : {
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_between) COMMA_HERE) ;
          if (((var_cas_idx).operator_strictInf (var_cas_shortestListLentgh)).isBuiltAndTrue ()) {
            nt_template_instruction_list_ (inLexique, var_cas_inPrefix, var_cas_inPath, var_cas_ioTemplateVariableMap, var_cas_ioResultingString) ;
          }else{
            nt_template_instruction_list_parseAndResetTemplateString (inLexique) ;
          }
          } break ;
        default :
          break ;
      }
      _condition_10901 = (var_cas_idx).operator_strictInf (var_cas_shortestListLentgh) ;
    }
  }
  GGS_lstring  var_cas_s = GGS_lstring ::constructor_retrieveAndResetTemplateString (inLexique COMMA_HERE) ;
  switch (select_goil_template_parser_7 (inLexique)) {
    case 1 : {
      } break ;
    case 2 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_after) COMMA_HERE) ;
      if (((var_cas_shortestListLentgh).operator_strictSup (GGS_uint (0U))).isBuiltAndTrue ()) {
        nt_template_instruction_list_ (inLexique, var_cas_inPrefix, var_cas_inPath, var_cas_ioTemplateVariableMap, var_cas_ioResultingString) ;
      }else{
        nt_template_instruction_list_parseAndResetTemplateString (inLexique) ;
      }
      } break ;
    default :
      break ;
  }
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_end) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_foreach) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*

void goil_template_parser::
pr_template_instruction_goil_template_parser_293_27_parse (goil_template_scanner & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_foreach) COMMA_HERE) ;
  { bool syntaxRepeat_3 = true ;
    while (syntaxRepeat_3) {
        nt_expression_parse (inLexique) ;
        switch (select_goil_template_parser_4 (inLexique)) {
          case 1 : {
            } break ;
          case 2 : {
            inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_prefixedby) COMMA_HERE) ;
            inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_identifier) COMMA_HERE) ;
            } break ;
          default :
            break ;
        }
      switch (select_goil_template_parser_3 (inLexique)) {
        case 2 : {
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1__2C_) COMMA_HERE) ;
          } break ;
        default :
          syntaxRepeat_3 = false ;
          break ;
      }
    }
  }
  switch (select_goil_template_parser_5 (inLexique)) {
    case 1 : {
      } break ;
    case 2 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_before) COMMA_HERE) ;
        nt_template_instruction_list_parse (inLexique) ;
      } break ;
    default :
      break ;
  }
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_do) COMMA_HERE) ;
    nt_template_instruction_list_parse (inLexique) ;
    switch (select_goil_template_parser_6 (inLexique)) {
      case 1 : {
        } break ;
      case 2 : {
        inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_between) COMMA_HERE) ;
          nt_template_instruction_list_parse (inLexique) ;
        } break ;
      default :
        break ;
    }
  switch (select_goil_template_parser_7 (inLexique)) {
    case 1 : {
      } break ;
    case 2 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_after) COMMA_HERE) ;
        nt_template_instruction_list_parse (inLexique) ;
      } break ;
    default :
      break ;
  }
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_end) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_template_scanner::goil_template_scanner_1_foreach) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
