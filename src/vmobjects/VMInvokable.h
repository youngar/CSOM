#ifndef VMINVOKABLE_H_
#define VMINVOKABLE_H_

/*
 * $Id: VMInvokable.h 227 2008-04-21 15:21:14Z michael.haupt $
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

// the following are invokables:
// * method
// * primitive
 
#include <vmobjects/OOObject.h>
#include <vmobjects/VMObject.h>

#include <stdbool.h>

VTABLE(VMInvokable) {
    void*     _ttable; // for OOObject compatibility
    void      (*invoke)(void*, pVMFrame);
    bool      (*is_primitive)(void*);
    pVMSymbol (*get_signature)(void*);
    void      (*set_signature)(void*, pVMSymbol);
    pVMClass  (*get_holder)(void*);
    void      (*set_holder)(void*, pVMClass);
    int       (*get_size_of_object)(void*);
    void      (*mark_references)(void*);
};

struct _VMInvokable {
    VTABLE(VMInvokable)* _vtable;
    VMOBJECT_FORMAT;
    pVMSymbol signature;
    pVMClass  holder;
};
    
#pragma mark vtable initialization

VTABLE(VMInvokable)* VMInvokable_vtable(void);


#endif VMINVOKABLE_H_


