/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSString, UIScrollView, UIView, WKWebView;

@interface WKPDFView : UIView <UIPDFAnnotationControllerDelegate, UIPDFPageViewDelegate, WKActionSheetAssistantDelegate, WKWebViewContentProvider> {
    struct RetainPtr<WKActionSheetAssistant> { 
        void *m_ptr; 
    } _actionSheetAssistant;
    unsigned int _centerPageNumber;
    UIView *_fixedOverlayView;
    BOOL _isPerformingSameDocumentNavigation;
    BOOL _isStartingZoom;
    struct CGSize { 
        float width; 
        float height; 
    } _minimumSize;
    struct CGSize { 
        float width; 
        float height; 
    } _overlaidAccessoryViewsInset;
    struct RetainPtr<WKPDFPageNumberIndicator> { 
        void *m_ptr; 
    } _pageNumberIndicator;
    struct Vector<PDFPageInfo, 0, WTF::CrashOnOverflow> { 
        struct { /* ? */ } *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    } _pages;
    struct RetainPtr<UIPDFDocument> { 
        void *m_ptr; 
    } _pdfDocument;
    struct InteractionInformationAtPosition { 
        struct IntPoint { 
            int m_x; 
            int m_y; 
        } point; 
        bool nodeAtPositionIsAssistedNode; 
        bool isSelectable; 
        bool isNearMarkedText; 
        bool touchCalloutEnabled; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } clickableElementName; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } url; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } title; 
        struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } bounds; 
        struct RefPtr<WebKit::ShareableBitmap> { 
            struct ShareableBitmap {} *m_ptr; 
        } image; 
    } _positionInformation;
    UIScrollView *_scrollView;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    } _suggestedFilename;
    WKWebView *_webView;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) struct CGPDFDocument { }* pdfDocument;
@property(readonly) NSString * suggestedFilename;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_URLForLinkAnnotation:(id)arg1;
- (void)_clearPages;
- (void)_computePageAndDocumentFrames;
- (void)_highlightLinkAnnotation:(id)arg1 forDuration:(double)arg2 completionHandler:(id)arg3;
- (struct CGPoint { float x1; float x2; })_offsetForPageNumberIndicator;
- (void)_resetZoomAnimated:(BOOL)arg1;
- (void)_revalidateViews;
- (void)_scrollToFragment:(id)arg1;
- (void)_updatePageNumberIndicator;
- (struct RetainPtr<NSArray> { void *x1; })actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(struct RetainPtr<NSArray> { void *x1; })arg3;
- (void)actionSheetAssistant:(id)arg1 openElementAtLocation:(struct CGPoint { float x1; float x2; })arg2;
- (void)actionSheetAssistant:(id)arg1 performAction:(int)arg2;
- (void)annotation:(id)arg1 isBeingPressedAtPoint:(struct CGPoint { float x1; float x2; })arg2 controller:(id)arg3;
- (void)annotation:(id)arg1 wasTouchedAtPoint:(struct CGPoint { float x1; float x2; })arg2 controller:(id)arg3;
- (void)dealloc;
- (struct CGPDFDocument { }*)pdfDocument;
- (const struct InteractionInformationAtPosition { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; bool x2; bool x3; bool x4; bool x5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_6_1_1; } x6; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_7_1_1; } x7; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_8_1_1; } x8; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_9_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_9_1_2; } x9; struct RefPtr<WebKit::ShareableBitmap> { struct ShareableBitmap {} *x_10_1_1; } x10; }*)positionInformationForActionSheetAssistant:(id)arg1;
- (void)resetZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)suggestedFilename;
- (void)web_computedContentInsetDidChange;
- (void)web_didSameDocumentNavigation:(unsigned int)arg1;
- (id)web_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 webView:(id)arg2;
- (void)web_setContentProviderData:(id)arg1 suggestedFilename:(id)arg2;
- (void)web_setFixedOverlayView:(id)arg1;
- (void)web_setMinimumSize:(struct CGSize { float x1; float x2; })arg1;
- (void)web_setOverlaidAccessoryViewsInset:(struct CGSize { float x1; float x2; })arg1;
- (void)zoom:(id)arg1 to:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3 kind:(int)arg4;

@end
