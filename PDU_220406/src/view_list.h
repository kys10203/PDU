/*
 * view_list.h
 *
 *  Created on: 2022. 3. 15.
 *      Author: suhwan
 */

#ifndef VIEW_LIST_H_
#define VIEW_LIST_H_

#include "defList.h"
#include "Dlg_LoginView.h"
#include "Dlg_View.h"
#include "Dlg_MainView.h"
#include "Dlg_GPSView.h"

#include "popup.h"


class CApp;
extern CApp * g_pApp;

extern CDlgLoginView * g_pLoginView;
extern CDlgMainView * g_pMainView;
extern CDlgGPSView * g_pGPSView;

#endif /* VIEW_LIST_H_ */
