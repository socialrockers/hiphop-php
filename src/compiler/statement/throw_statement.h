/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __THROW_STATEMENT_H__
#define __THROW_STATEMENT_H__

#include <compiler/statement/statement.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

DECLARE_BOOST_TYPES(ThrowStatement);

class ThrowStatement : public Statement {
public:
  ThrowStatement(STATEMENT_CONSTRUCTOR_PARAMETERS, ExpressionPtr exp);

  DECLARE_STATEMENT_VIRTUAL_FUNCTIONS;
  virtual int getLocalEffects() const { return CanThrow;}

private:
  ExpressionPtr m_exp;
};

///////////////////////////////////////////////////////////////////////////////
}
#endif // __THROW_STATEMENT_H__
