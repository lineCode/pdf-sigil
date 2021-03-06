/** @file
 *
 */

#ifndef PDF_SIGIL_ACROFORM_H
#define PDF_SIGIL_ACROFORM_H

#include "types.h"

/** @brief Process the interactive form dictionary (AcroForm), get values from
 *         the Fields and SigFlags entries
 *
 * @param sgl context
 * @return ERR_NONE if success
 */
sigil_err_t process_acroform(sigil_t *sgl);

/** @brief Tests for the acroform module
 *
 * @param verbosity output level - 0 means nothing, 1 prints module names with
 *                  the overall module result, and 2 prints also each test inside
 *                  of the module
 * @return 0 if success, 1 if failed
 */
int sigil_acroform_self_test(int verbosity);

#endif //PDF_SIGIL_ACROFORM_H
