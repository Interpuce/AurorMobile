/**
 * -------------------------------------------------------------------------
 *                                   AurorOS
 * (c) 2022-2024 Interpuce
 * 
 * You should receive AurorOS license with this source code. If not - check:
 *  https://github.com/Interpuce/AurorOS/blob/main/LICENSE.md
 * -------------------------------------------------------------------------
 * This file is modified to make AurorMobile work. Learn more about
 * AurorMobile here:
 *   https://github.com/Interpuce/AurorMobile
 * -------------------------------------------------------------------------
 */

#include <memory.h>
#include <panic.h>
 
void main() {
    init_memory();

    // terminal is deleted

    kernelpanic("NOT_IMPLEMENTED"); // to prevent the os from doing nothing and
    //                                 staying in freeze mode
}