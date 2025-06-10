/**************************************************************************
   Copyright 2012 Cynthia Kop

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
 *************************************************************************/

#ifndef SATSOLVER_H
#define SATSOLVER_H

#include "formula.h"

class SatSolver {
  private:
    string solver_command;
    string resource_dir;

  public:
    SatSolver();
    void set_resource_dir(bool use);
      // this sets whether or not we should use the resources/
      // directory for writing files and calling the SAT solver
    bool solve(PFormula &form);
      // if solvable, returns true and sets the variables to prove it
      // if not solvable or unknown, returns false
};

extern SatSolver satsolver;

#endif
