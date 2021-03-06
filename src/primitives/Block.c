/*
 * $Id: Block.c 145 2007-11-19 23:50:24Z michael.haupt $
 *
Copyright (c) 2007 Michael Haupt, Tobias Pape
Software Architecture Group, Hasso Plattner Institute, Potsdam, Germany
http://www.hpi.uni-potsdam.de/swa/

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
  */

#include "Block.h"

#include <vmobjects/VMObject.h>
#include <vmobjects/VMFrame.h>

#include <vm/Universe.h>


void  _Block_value(pVMObject object, pVMFrame frame) {
    // intentionally left blank
}


void  _Block_value_(pVMObject object, pVMFrame frame) {
    // intentionally left blank
}


void  _Block_value_with_(pVMObject object, pVMFrame frame) {
    // intentionally left blank
}


void  _Block_restart(pVMObject object, pVMFrame frame) {
    SEND(frame, set_bytecode_index, 0);
    SEND(frame, reset_stack_pointer);    
}
