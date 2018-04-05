/*! \file applist.h
  \brief Table of all active applications.  Add yours here.
*/

#include "apps/submenu.h"

//Non-radio apps first.
#include "apps/clock.h"
#include "apps/alarm.h"
#include "apps/stopwatch.h"
#include "apps/rpn.h"
#include "apps/hex.h"
#include "apps/phrase.h"
#include "apps/rngapp.h"

//Then radio apps.
#include "apps/morse.h"
#include "apps/tuner.h"
#include "apps/iclicker.h"
#include "apps/beacon.h"
#include "apps/ook.h"


/* For each application, the init() function is called at entry.  The
   draw() function is called four times per second.  The exit()
   function is called when the mode button is pressed, but returns 1
   to reject a mode switch or 0 to allow it.
 */
extern const struct app apps[];

/* Because we had too many applications in the main menu, it became
   necessary to break them out into a submenu.  These behave just like
   the main menu once selected.
 */
extern const struct app subapps[];
