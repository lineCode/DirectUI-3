#pragma once

namespace DirectUI
{
	struct UpdateCache
	{
		// ??
	};

	//32λ���ݽṹ��С 0x80
	class UILIB_API Element
	{
	public:
		//0 ���ָ��
		//_vftable_

		//0x4
		UINT32 v4;

		//0x8
		UINT32 v5;

		//0xC
		UINT32 v13;

		//0x10
		UINT32 v1;

		//0x14
		UINT32 v7;

		//0x18
		UINT32 v11;

		//0x1C
		UINT32 v12;

		//0x20
		byte v30[4];

		//0x24
		UINT32 v6;

		//0x28
		UINT32 v14;

		//0x2C
		UINT32 v15;

		//0x30
		UINT32 v16;

		//0x34
		UINT32 v17;

		//0x38
		UINT32 v18;

		//0x3C
		UINT32 v19;

		//0x40
		UINT32 v20;

		//0x44
		UINT32 v21;

		//0x48
		UINT32 v22;

		//0x4C
		UINT32 v23;

		//0x50
		UINT32 v24;

		//0x54
		UINT32 v25;

		//0x58
		UINT32 v26;

		//0x5C
		UINT32 v27;

		//0x60
		UINT32 v60;

		//0x64
		UINT8 v64;

		//0x65
		UINT8 v10;

		//0x66
		UINT8 v66;

		//0x67
		UINT8 v8;

		//0x68
		UINT8 v9;

		//0x69
		//4��������0x6C

		//0x6C
		UINT32 v29;

		//0x70

		byte v31[0x78-0x70];

		//0x78
		UINT32 v2;

		//0x7C
		UINT32 v3;


		Element();
		Element(const Element&);
		//0
		virtual ~Element();

		Element& operator=(const Element &);

		long Initialize(unsigned int, Element*, unsigned long*);
		static long WINAPI Create(unsigned int, Element*parent, unsigned long*, Element**out);
		static long WINAPI UnRegister(struct IClassInfo**);


		Element * GetParent(void);
		RECT const * GetPadding(Value * *);
		bool GetOverhang(void);
		Element * GetMouseWithinChild(void);
		bool GetMouseWithin(void);
		bool GetMouseFocused(void);
		SIZE const * GetMinSize(Value * *);
		RECT const * GetMargin(Value * *);
		POINT const * GetLocation(Value * *);
		int GetLayoutPos(void);
		Layout * GetLayout(Value * *);
		Element * GetKeyWithinChild(void);
		bool GetKeyWithin(void);
		int GetIndex(void);
		Element * GetImmediateChild(Element *);
		unsigned short GetID(void);
		bool GetHighDPI(void);
		int GetHeight(void);
		int GetForegroundStdColor(void);
		struct DirectUI::Fill const * GetForegroundColor(Value * *);
		int GetFontWeight(void);
		int GetFontStyle(void);
		int GetFontSize(void);
		int GetFontQuality(void);
		unsigned short const * GetFontFace(Value * *);
		unsigned short const * GetFont(Value * *);
		static CRITICAL_SECTION * __stdcall GetFactoryLock(void);
		SIZE const * GetExtent(Value * *);
		long GetEncodedContentString(unsigned short *, UINT_PTR);
		bool GetEnabled(void);

		int GetDPI(void);
		HGADGET GetDisplayNode(void);
		int GetDirection(void);
		SIZE const * GetDesiredSize(void);
		DeferCycle * GetDeferObject(void);
		unsigned short const * GetContentString(Value * *);
		int GetContentAlign(void);
		int GetColorize(void);
		bool GetClickablePoint(POINT *);
		static IClassInfo * __stdcall GetClassInfoPtr(void);
		unsigned short const * GetClass(Value * *);
		DynamicArray<Element *, 0> * GetChildren(Value * *);
		RECT const * GetBorderThickness(Value * *);
		int GetBorderStyle(void);
		int GetBorderStdColor(void);

		
		
		//1
		virtual bool IsRTLReading();

		//2
		virtual bool IsContentProtected();


		//3
		virtual UCString GetContentStringAsDisplayed(class Value**);

		//4
		virtual bool OnPropertyChanging(const PropertyInfo*, int, class Value*, class Value*);
		//5
		virtual bool OnPropertyChanging(PropertyInfo*, int, class Value*, class Value*);
		//6
		virtual void OnPropertyChanged(const PropertyInfo*, int, class Value*, class Value*);
		//7
		virtual void OnPropertyChanged(PropertyInfo*, int, Value*, Value*);
		//8
		virtual void OnGroupChanged(int, bool);
		//9
		virtual void OnInput(struct InputEvent*);
		//10
		virtual void OnKeyFocusMoved(Element*, Element*);
		//11
		virtual void OnMouseFocusMoved(Element*, Element*);
		//12
		virtual void OnDestroy();
		//13
		virtual void OnEvent(Event*);
		//14
		virtual void Paint(HDC, RECT const*, RECT const*, RECT*, RECT*);

		//15
		virtual SIZE GetContentSize(int, int, class Surface*);

		long Add(Element*);
		long Add(Element*, int(__cdecl*)(const void*, const void*));
		//16
		virtual long Add(Element**, unsigned int);

		long AddListener(IElementListener*);

		unsigned long WINAPI AddRef();
		static UID WINAPI AnimationChange();

		void BroadcastEvent(struct Event*);
		void Detach(class DeferCycle*);

		//17
		virtual long Insert(Element**, unsigned int, unsigned int);
		//18
		virtual long Remove(Element**, unsigned int);

		//19
		virtual Element* GetAdjacent(Element*, int, const struct NavReference*, unsigned long);

		//20
		virtual bool EnsureVisible(int, int, int, int);

		//21
		virtual void SetKeyFocus(void);

		//22
		virtual unsigned int MessageCallback(GMSG*);

		//23
		virtual long WINAPI QueryInterface(GUID const &, void**);



		long Destroy(bool);
		long DestroyAll(bool);
		void DoubleBuffered(bool);
		void EnableUiaEvents(bool);
		void EndDefer(unsigned long);
		bool EnsureVisible(unsigned int);
		bool EnsureVisible(void);
		Element* FindDescendent(ATOM id);
		void FireEvent(struct Event*, bool, bool);

		bool GetAbsorbsShortcut();
		UCString GetAccDefAction(Value**);
		UCString GetAccDesc(Value**);
		UCString GetAccHelp(Value**);
		UCString GetAccItemStatus(Value**);
		UCString GetAccItemType(Value**);
		UCString GetAccName(Value**);
		UCString GetAccNameAsDisplayed(Value**);
		UCString GetAccValue(Value**);

		int GetAccRole();
		int GetAccState();
		bool GetAccessible();
		int GetActive();
		Element* GetRoot();

		// Properties? wtf is this

		static const PropertyInfo* WINAPI AbsorbsShortcutProp();
		static const PropertyInfo* WINAPI AccDefActionProp();
		static const PropertyInfo* WINAPI AccDescProp();
		static const PropertyInfo* WINAPI AccHelpProp();
		static const PropertyInfo* WINAPI AccItemStatusProp();
		static const PropertyInfo* WINAPI AccItemTypeProp();
		static const PropertyInfo* WINAPI AccNameProp();
		static const PropertyInfo* WINAPI AccRoleProp();
		static const PropertyInfo* WINAPI AccStateProp();
		static const PropertyInfo* WINAPI AccValueProp();
		static const PropertyInfo* WINAPI AccessibleProp();
		static const PropertyInfo* WINAPI ActiveProp();
		static const PropertyInfo* WINAPI AlphaProp();
		static const PropertyInfo* WINAPI AnimationProp();
		static const PropertyInfo* WINAPI BackgroundProp();
		static const PropertyInfo* WINAPI BorderColorProp();
		static const PropertyInfo* WINAPI BorderStyleProp();
		static const PropertyInfo* WINAPI BorderThicknessProp();
		static const PropertyInfo* WINAPI ChildrenProp();
		static const PropertyInfo* WINAPI ClassProp();
		static const PropertyInfo* WINAPI CompositedTextProp();
		static const PropertyInfo* WINAPI ContentAlignProp();

		static const PropertyInfo* WINAPI ContentProp();
		static const PropertyInfo* WINAPI CursorProp();
		static const PropertyInfo* WINAPI CustomProp();
		static const PropertyInfo* WINAPI DPIProp();
		static const PropertyInfo* WINAPI DirectionProp();
		static const PropertyInfo* WINAPI DesiredSizeProp();
		static const PropertyInfo* WINAPI ExtentProp();
		static const PropertyInfo* WINAPI ForegroundProp();
		static const PropertyInfo* WINAPI FontFaceProp();
		static const PropertyInfo* WINAPI FontProp();
		static const PropertyInfo* WINAPI FontQualityProp();
		static const PropertyInfo* WINAPI FontSizeProp();
		static const PropertyInfo* WINAPI FontStyleProp();
		static const PropertyInfo* WINAPI FontWeightProp();
		static const PropertyInfo* WINAPI KeyFocusedProp();
		static const PropertyInfo* WINAPI KeyWithinProp();
		static const PropertyInfo* WINAPI LastDSConstProp();
		static const PropertyInfo* WINAPI LayoutPosProp();
		static const PropertyInfo* WINAPI LayoutProp();
		static const PropertyInfo* WINAPI LocationProp();
		static const PropertyInfo* WINAPI HeightProp();
		static const PropertyInfo* WINAPI HighDPIProp();
		static const PropertyInfo* WINAPI IDProp();
		static const PropertyInfo* WINAPI MinSizeProp();
		static const PropertyInfo* WINAPI MouseFocusedProp();
		static const PropertyInfo* WINAPI MouseWithinProp();
		static const PropertyInfo* WINAPI OverhangProp();
		static const PropertyInfo* WINAPI PaddingProp();
		static const PropertyInfo* WINAPI ParentProp();
		static const PropertyInfo* WINAPI PosInLayoutProp();
		static const PropertyInfo* WINAPI SelectedProp();
		static const PropertyInfo* WINAPI ShadowIntensityProp();
		static const PropertyInfo* WINAPI SheetProp();
		static const PropertyInfo* WINAPI ShortcutProp();
		static const PropertyInfo* WINAPI SizeInLayoutProp();
		static const PropertyInfo* WINAPI TextGlowSizeProp();
		static const PropertyInfo* WINAPI TooltipMaxWidthProp();
		static const PropertyInfo* WINAPI TooltipProp();
		static const PropertyInfo* WINAPI VisibleProp();
		static const PropertyInfo* WINAPI WidthProp();
		static const PropertyInfo* WINAPI WindowActiveProp();
		static const PropertyInfo* WINAPI XProp();
		static const PropertyInfo* WINAPI YProp();

		long GetRootRelativeBounds(LPRECT);
		bool GetSelected();
		int GetShadowIntensity();
		StyleSheet* GetSheet();
		int GetShortcut();
		UChar GetShortcutChar();
		int GetTextGlowSize();
		bool GetTooltip();
		int GetTooltipMaxWidth();
		Element* GetTopLevel();
		float GetTreeAlphaLevel();
		Value* GetValue( const PropertyInfo* (WINAPI*)(void), int, UpdateCache*);
		Value* GetValue(const PropertyInfo*, int, UpdateCache*);
		bool GetVisible();
		int GetWidth();
		bool GetWindowActive();
		int GetX();
		int GetY();

		bool HasAnimation();
		bool HasBorder();
		bool HasChildren();
		bool HasContent();
		bool HasLayout();
		bool HasMargin();
		bool HasPadding();
		static void WINAPI InitDefaultFontSize();
		static UID WINAPI KeyboardNavigate();

		long Insert(Element*, unsigned int);
		
		void InvokeAnimation(int, unsigned int);
		void InvokeAnimation(unsigned int, unsigned int, float, float, bool);
		bool IsCompositedText();
		
		bool IsDefaultCAlign();
		bool IsDefaultCursor();
		bool IsDescendent(Element*);
		bool IsDestroyed();
		bool IsHosted();
		bool IsRTL();
		
		int IsRoot();
		bool IsSelfLayout();
		bool IsValidAccessor(const PropertyInfo*, int, bool);
		static bool WINAPI IsValidValue(const PropertyInfo*, Value*);
		bool IsWordWrap();
		void MapElementPoint(Element*, POINT const*, LPPOINT);
		static const PropertyInfo* WINAPI MarginProp();

		void MarkNeedsDSUpdate();
		bool NeedsDSUpdate();

		
		

		void PaintBackground(HDC, Value*, RECT const &, RECT const &, RECT const &, RECT const &);
		void PaintBorder(HDC, Value*, RECT*, RECT const &);
		void PaintContent(HDC, RECT const*);
		void PaintFocusRect(HDC, RECT const*, RECT const*);
		void PaintStringContent(HDC, RECT const*, Value*, int);

		void PostEvent(Event*);
		long QueueDefaultAction();
		static long WINAPI Register();
		unsigned long WINAPI Release();
		long Remove(Element*);
		long RemoveAll();
		void RemoveListener(struct IElementListener*);
		long RemoveLocalValue( const PropertyInfo* (WINAPI*)(void));
		long RemoveLocalValue(const PropertyInfo*);

		long SetAbsorbsShortcut(bool);
		long SetAccDefAction(UCString);
		long SetAccDesc(UCString);
		long SetAccHelp(UCString);
		long SetAccItemStatus(UCString);
		long SetAccItemType(UCString);
		long SetAccName(UCString);
		long SetAccRole(int);
		long SetAccState(int);
		long SetAccValue(UCString);
		long SetAccessible(bool);
		long SetActive(int);
		long SetAlpha(int);
		long SetAnimation(int);
		long SetBackgroundColor(Fill const &);
		long SetBackgroundColor(unsigned long);
		long SetBackgroundColor(unsigned long, unsigned long, unsigned char);
		long SetBackgroundColor(unsigned long, unsigned long, unsigned long, unsigned char);
		long SetBackgroundColor(UCString, int, int);
		long SetBackgroundStdColor(int);
		long SetBorderColor(unsigned long);
		long SetBorderGradientColor(unsigned long, unsigned long, unsigned char);
		long SetBorderStdColor(int);
		long SetBorderStyle(int);
		long SetBorderThickness(int, int, int, int);
		long SetClass(UCString);
		static void WINAPI SetClassInfoPtr(IClassInfo*);
		long SetCompositedText(bool);
		long SetContentAlign(int);
		long SetContentGraphic(UCString, unsigned char, unsigned int);
		long SetContentGraphic(UCString, unsigned short, unsigned short);
		long SetContentString(UCString);
		long SetCursor(UCString);
		long SetCursorHandle(HICON);
		long SetDirection(int);
		long SetEnabled(bool);
		long SetEncodedContentString(UCString);
		long SetFont(UCString);
		long SetFontFace(UCString);
		long SetFontQuality(int);
		long SetFontSize(int);
		long SetFontStyle(int);
		long SetFontWeight(int);
		long SetForegroundColor(unsigned long);
		long SetForegroundColor(unsigned long, unsigned long, unsigned char);
		long SetForegroundColor(unsigned long, unsigned long, unsigned long, unsigned char);
		long SetForegroundStdColor(int);
		long SetHeight(int);
		long SetID(UCString);
		long SetLayout(class Layout*);
		long SetLayoutPos(int);
		long SetMargin(int, int, int, int);
		long SetMinSize(int, int);
		long SetOverhang(bool);
		long SetPadding(int, int, int, int);
		long SetSelected(bool);
		long SetShadowIntensity(int);
		long SetSheet(StyleSheet*);
		long SetShortcut(int);
		long SetStdCursor(int);
		long SetTextGlowSize(int);
		long SetTooltip(bool);
		long SetTooltipMaxWidth(int);
		long SetValue( const PropertyInfo* (WINAPI*)(void), int, Value*);
		long SetValue(const PropertyInfo*, int, Value*);
		long SetVisible(bool);
		long SetWidth(int);
		long SetWindowActive(bool);
		long SetX(int);
		long SetY(int);

		long SortChildren(int (*)(void const*, void const*));
		void StartDefer(unsigned long*);
		void StopAnimation(unsigned int);
		DeferCycle* TestDeferObject();
		bool UiaEvents();
		void UpdateLayout();
		static void WINAPI _AddDependency(Element*, const PropertyInfo*, int, struct DepRecs*, DeferCycle*, long*);
		void _ClearNeedsLayout();
		static long WINAPI _DisplayNodeCallback(HGADGET, void*, struct EventMsg*);
		void _EndOptimizedLayoutQ();
		int _GetChangesUpdatePass();
		unsigned int _GetNeedsLayout();
		static int WINAPI _MarkElementForDS(Element*);
		static int WINAPI _MarkElementForLayout(Element*, unsigned int);
		static bool WINAPI _SetGroupChanges(Element*, int, DeferCycle*);
		int _SetNeedsLayout(unsigned int);
		void _StartOptimizedLayoutQ(void);
		static void WINAPI _TransferGroupFlags(Element*, int);
		SIZE _UpdateDesiredSize(int, int, Surface*);
		void _UpdateLayoutPosition(int, int);
		void _UpdateLayoutSize(int, int);
		static PropertyInfo const * __stdcall EnabledProp();
		int GetAlpha(void);
		int GetAnimation(void);
		Fill const * GetBackgroundColor(Value * *);
		int GetBackgroundStdColor(void);
		Fill const * GetBorderColor(Value * *);
	protected:
		//24
		virtual void _SelfLayoutDoLayout(int, int);

		//25
		virtual SIZE _SelfLayoutUpdateDesiredSize(int, int, Surface*);

		//26
		virtual void OnHosted(Element*);
		//27
		virtual void OnUnHosted(Element*);
		//28
		virtual void UpdateTooltip(Element*);
		//29
		virtual void ActivateTooltip(Element*, unsigned long);
		//30
		virtual void RemoveTooltip(Element*);
public:

		//31
		virtual bool GetKeyFocused();

		//32
		virtual IClassInfo* GetClassInfoW();
		//33
		virtual long GetAccessibleImpl(IAccessible**);

		//34
		virtual long DefaultAction();

		//35
		virtual HRESULT GetElementProviderImpl(class InvokeHelper *, ElementProvider * *);


		//36
		virtual void HandleUiaDestroyListener();
		//37
		virtual void HandleUiaPropertyListener(const PropertyInfo*, int, Value*, Value*);
		//38
		virtual void HandleUiaPropertyChangingListener(const PropertyInfo*);
		//39
		virtual void HandleUiaEventListener(Event*);
		
protected:

		void MarkHosted();
		void MarkSelfLayout();
		static void WINAPI _FlushLayout(Element*, DeferCycle*);
		static void WINAPI _InvalidateCachedDSConstraints(Element*);
		void _OnFontPropChanged(Value*);
		long _RemoveLocalValue( const PropertyInfo* (WINAPI*)(void), bool);
		long _RemoveLocalValue(const PropertyInfo*, bool);
		long _SetValue( const PropertyInfo* (WINAPI*)(void), int, Value*, bool);
		long _SetValue(const PropertyInfo*, int, Value*, bool);
private:
		Element* FindDescendentWorker(unsigned short);
		void _SyncBackground();
		void _SyncRedrawStyle();
		void _SyncVisible();
		bool IsPointValid(double, double);
		unsigned short* RemoveShortcutFromName(UCString);
		bool TryLinePattern(LPPOINT, const RECT&);
		bool TryPattern(double, double, LPPOINT, const RECT&);
		bool TrySparsePattern(LPPOINT, const RECT&);
		void _BroadcastEventWorker(Event*);
		int _CachedValueIsEqual(const PropertyInfo*, Element*);
		void _GetBuriedSheetDependencies(const PropertyInfo*, Element*, struct DepRecs*, DeferCycle*, long*);
		void _UpdatePropertyInCache(const PropertyInfo*);
		static void WINAPI _VoidPCNotifyTree(int, DeferCycle*);
		

		void _FlushDS(DeferCycle*);
		Value* _GetComputedValue(const PropertyInfo*, UpdateCache*);
		long _GetDependencies(const PropertyInfo*, int, struct DepRecs*, int, Value*, DeferCycle*);
		Value* _GetLocalValue(const PropertyInfo*);
		Value* _GetLocalValueFromVM(const PropertyInfo*);
		Value* _GetSpecifiedValue(const PropertyInfo*, UpdateCache*);
		Value* _GetSpecifiedValueIgnoreCache(const PropertyInfo*);
		void _InheritProperties();
		long _PostSourceChange();
		long _PreSourceChange( const PropertyInfo* (WINAPI*)(void), int, Value*, Value*);
		long _PreSourceChange(const PropertyInfo*, int, Value*, Value*);

		unsigned int GetCommonDrawTextFlags(int);



		static IClassInfo*s_pClassInfo;
	};

	class UILIB_API ElementProxy : public IProxy
	{
	public:
		ElementProxy(ElementProxy const &);
		ElementProxy(void);
		ElementProxy & operator=(ElementProxy const &);

		static ElementProxy * __stdcall Create(Element *);
		//1
		virtual long DoMethod(int, char *);
	protected:
		long GetAutomationId(VARIANT *);
		long GetBoundingRect(UiaRect *);
		long GetContent(VARIANT *, IAccessible *);
		void GetControlType(VARIANT *, IAccessible *);
		long GetFragmentRoot(IRawElementProviderFragmentRoot * *);
		long GetHwnd(HWND *);
		long GetLabel(VARIANT *);
		long GetProperty(VARIANT *, int);
		long GetProviderOptions(ProviderOptions *);
		long GetRuntimeId(SAFEARRAY * *);
		long IsPatternSupported(Schema::Pattern, bool *);
		long Navigate(NavigateDirection, IRawElementProviderFragment**);
		long SetString(VARIANT *, UCString (Element::*)(Value * *));
		int _UsesUIAProxies(void);

		//2
		virtual void Init(Element *);

	};

	//����������ܿ��ܴ���
	class UILIB_API ElementProvider
		: public RefcountBase
		, public IRawElementProviderSimple
		, public IRawElementProviderFragment
		, public IRawElementProviderAdviseEvents
	{
	public:
		ElementProvider();
		ElementProvider(const ElementProvider&) = delete;
		virtual ~ElementProvider();

		static long WINAPI Create(Element*, class InvokeHelper*, ElementProvider**out);

		long DoInvokeArgs(int, ProviderProxyCall, char*);
		const Element* GetElementKey();
		void TossElement();
		void TossPatternProvider(Schema::Pattern);


		//IUnknown
		virtual unsigned long WINAPI AddRef();
		virtual unsigned long WINAPI Release();
		virtual long WINAPI QueryInterface(const GUID&, void**);

		//IRawElementProviderSimple
		virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProviderOptions(
			/* [retval][out] */ __RPC__out enum ProviderOptions *pRetVal);

		virtual HRESULT STDMETHODCALLTYPE GetPatternProvider(
			/* [in] */ PATTERNID patternId,
			/* [retval][out] */ __RPC__deref_out_opt IUnknown **pRetVal);

		virtual HRESULT STDMETHODCALLTYPE GetPropertyValue(
			/* [in] */ PROPERTYID propertyId,
			/* [retval][out] */ __RPC__out VARIANT *pRetVal);

		virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HostRawElementProvider(
			/* [retval][out] */ __RPC__deref_out_opt IRawElementProviderSimple **pRetVal);

		//IRawElementProviderFragment
		virtual HRESULT STDMETHODCALLTYPE Navigate(
			/* [in] */ enum NavigateDirection direction,
			/* [retval][out] */ __RPC__deref_out_opt IRawElementProviderFragment **pRetVal);

		virtual HRESULT STDMETHODCALLTYPE GetRuntimeId(
			/* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *pRetVal);

		virtual HRESULT STDMETHODCALLTYPE get_BoundingRectangle(
			/* [retval][out] */ __RPC__out UiaRect *pRetVal);

		virtual HRESULT STDMETHODCALLTYPE GetEmbeddedFragmentRoots(
			/* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *pRetVal);

		virtual HRESULT STDMETHODCALLTYPE SetFocus(void);

		virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FragmentRoot(
			/* [retval][out] */ __RPC__deref_out_opt IRawElementProviderFragmentRoot **pRetVal);

		//IRawElementProviderAdviseEvents
		virtual HRESULT STDMETHODCALLTYPE AdviseEventAdded(
			/* [in] */ EVENTID eventId,
			/* [in] */ __RPC__in SAFEARRAY * propertyIDs);

		virtual HRESULT STDMETHODCALLTYPE AdviseEventRemoved(
			/* [in] */ EVENTID eventId,
			/* [in] */ __RPC__in SAFEARRAY * propertyIDs);

		//1 �˺����ƺ���������ȷ
		virtual ProviderProxyCall GetProxyCreator();
		//2
		virtual volatile const Element* GetElement();

	protected:
		//3
		virtual long Init(Element*, InvokeHelper*);
		long DoInvoke(int, ...);
	};

	class UILIB_API ElementProviderManager
	{
	public:
		ElementProviderManager & operator=(ElementProviderManager const &);

		static long WINAPI Add(ElementProvider *);
		static void WINAPI Close();
		static ElementProvider *WINAPI Find(Element *);
		static long WINAPI Init();
		static void WINAPI Remove(ElementProvider *);

		static CRITICAL_SECTION g_cs;
	private:
		static bool WINAPI FindProviderCallback(ElementProvider *, void *);

		static UiaArray<ElementProvider *> * g_pArrayPprv;
	};

}