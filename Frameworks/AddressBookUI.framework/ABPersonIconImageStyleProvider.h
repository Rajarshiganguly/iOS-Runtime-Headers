/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonIconImageView, ABPersonImageView;

@interface ABPersonIconImageStyleProvider : ABStyleProvider {
    ABPersonIconImageView *_iconImageView;
    ABPersonImageView *_imageView;
}

- (void)_clearAsStyleProvider;
- (id)cardPhotoBackgroundImage;
- (id)cardPhotoFacebookAttributionImage;
- (float)cardPhotoFrameBorderSize;
- (id)cardPhotoMaskImage;
- (struct CGSize { float x1; float x2; })cardPhotoOffset;
- (id)cardPhotoOverlayImage;
- (id)cardPlaceholderCompanyImage;
- (BOOL)cardPlaceholderImageShouldApplyMaskAndOverlay;
- (id)cardPlaceholderPersonImage;
- (void)clearWeakReferencesToObject:(id)arg1;
- (void)dealloc;
- (id)initWithIconImageView:(id)arg1 imageView:(id)arg2;
- (float)personViewHeaderImageHeight;
- (float)personViewHeaderImageWidth;

@end
