#include "Dlg_View.h"

#include <unistd.h>

CDlgView::CDlgView(){
	this->m_nSelect = 0;
	m_nCursorPos = 0U;
	m_pClips = NULL;
	m_nClipsCnt = 0U;
	m_bShow = false;
}

CDlgView::~CDlgView(){
//	if(m_pClips != NULL){
//		delete [] m_pClips;
//		m_pClips = NULL;
//	}
}

//void CDlgView::Hide(Graphics * pScreenDC){
//	if( (pScreenDC) != NULL){
//		if((m_pClips != NULL) && (m_nClipsCnt > 0U)){
//			for(U_INT32 i = 0U; i < m_nClipsCnt; i++){
//				m_pClips[i].Redraw();
//			}
//			m_bShow = false;
//		}
//	}
//
//	if(m_pClips != NULL){
//		delete [] m_pClips;
//		m_pClips = NULL;
//	}
//
//	m_nClipsCnt = 0U;
//	m_nCursorPos = 0U;
//	this->m_nSelect = 0;
//}


