/* ***************************************************************************
* scrollload.c -- scroll loading, used to allow widget to automatically load 
* data when scrolling to the visible region.
*
* Copyright (C) 2016 by Liu Chao <lc-soft@live.cn>
*
* This file is part of the LC-Finder project, and may only be used, modified,
* and distributed under the terms of the GPLv2.
*
* By continuing to use, modify, or distribute this file you indicate that you
* have read the license and understand and accept it fully.
*
* The LC-Finder project is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
* or FITNESS FOR A PARTICULAR PURPOSE. See the GPL v2 for more details.
*
* You should have received a copy of the GPLv2 along with this file. It is
* usually in the LICENSE.TXT file, If not, see <http://www.gnu.org/licenses/>.
* ****************************************************************************/

/* ****************************************************************************
* scrollload.c -- �������أ������ò������ڹ������ɼ�����ʱ�Զ���������.
*
* ��Ȩ���� (C) 2016 ������ ���� <lc-soft@live.cn>
*
* ����ļ��� LC-Finder ��Ŀ��һ���֣�����ֻ���Ը���GPLv2����Э����ʹ�á����ĺ�
* ������
*
* ����ʹ�á��޸Ļ򷢲����ļ����������Ѿ��Ķ�����ȫ����ͽ����������Э�顣
*
* LC-Finder ��Ŀ�ǻ���ʹ��Ŀ�Ķ�����ɢ���ģ��������κε������Σ�����û������
* �Ի��ض���;���������������������GPLv2����Э�顣
*
* ��Ӧ���յ������ڱ��ļ���GPLv2����Э��ĸ�������ͨ���� LICENSE �ļ��У����
* û�У���鿴��<http://www.gnu.org/licenses/>.
* ****************************************************************************/

#include <LCUI_Build.h>
#include <LCUI/LCUI.h>
#include <LCUI/gui/widget.h>

typedef struct ScrollLoadingRec_ {
	LCUI_Widget container;
} ScrollLoadingRec, *ScrollLoading;

static void OnScroll( LCUI_Widget w, LCUI_WidgetEvent e, void *arg )
{
	_DEBUG_MSG("on scroll\n");
}

ScrollLoading NewScrollLoading( LCUI_Widget container )
{
	ScrollLoading ctx = NEW( ScrollLoadingRec, 1 );
	ctx->container = container;
	Widget_BindEvent( container, "scroll", OnScroll, ctx, NULL );
	return ctx;
}

int ScrollLoading_Bind( ScrollLoading ctx, LCUI_Widget target )
{
	return 0;
}