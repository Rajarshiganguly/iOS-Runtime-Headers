/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSMutableIndexSet;

@interface IUiPadVideosDataSource : IUMediaQueriesDataSource {
    NSMutableIndexSet *_artStillFrameMap;
}

+ (BOOL)usesNowPlayingIndicator;

- (struct CGPoint { float x1; float x2; })actualImageOrigin;
- (BOOL)allowsDeletion;
- (BOOL)alwaysGroupedInGridView;
- (id)copyGetMoreFromITunesStoreActionRow;
- (void)dealloc;
- (id)detailMediaQueryForMediaItem:(id)arg1 baseQuery:(id)arg2;
- (id)gridBackgroundColor;
- (BOOL)gridDimTouchedAlbum;
- (int)gridImageContentMode;
- (Class)gridImageModifierClass;
- (id)gridSubtitleColor;
- (id)gridTitleColor;
- (int)gridTitleStyle;
- (float)gridTopPadding;
- (BOOL)gridUseUnmodifiedThumbnails;
- (BOOL)isArtAStillFrameAtIndex:(unsigned int)arg1;
- (id)newGridImageView;
- (void)reloadActionRows;
- (BOOL)selectionPossibleForIndex:(unsigned int)arg1;
- (void)setArtAStillFrame:(BOOL)arg1 atIndex:(unsigned int)arg2;
- (void)setQuery:(id)arg1;
- (BOOL)shouldDisplayWhenEmpty;
- (struct CGSize { float x1; float x2; })thumbnailSize;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (id)viewControllerContextForMediaQuery:(id)arg1;

@end
