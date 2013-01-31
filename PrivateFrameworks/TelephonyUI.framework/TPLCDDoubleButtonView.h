/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPWellButtonView, TPButton;

@interface TPLCDDoubleButtonView : TPLCDView  {
    TPWellButtonView *_leftWellButtonView;
    TPWellButtonView *_rightWellButtonView;
}

@property(readonly) TPButton * leftButton;
@property(readonly) TPButton * rightButton;


- (id)rightButton;
- (id)leftButton;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_leftWellFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rightWellFrame;
- (BOOL)shouldCenterText;
- (BOOL)showImageViewOnLeftSide;
- (BOOL)shouldCenterContentView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fullSizedContentViewFrame;
- (id)initWithDefaultSizeForOrientation:(int)arg1;

@end