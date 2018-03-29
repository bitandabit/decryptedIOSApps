//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCBitmojiAvatarPickerViewControllerDelegate-Protocol.h"
#import "SCCustomStickerManagerListener-Protocol.h"
#import "SCGiphyStickerSearchSectionDelegate-Protocol.h"
#import "SCStickerPickerCategoryCellScrollbarDelegate-Protocol.h"
#import "SCStickerQuerySuggestionControllerDelegate-Protocol.h"
#import "SCTimeProfilable-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, SCBitmojiAvatarPicker, SCCustomStickerEmptyPage, SCPreviewTooltipBalloon, SCStickerCategory, SCStickerPickerCategoryCellScrollbar, SCStickerPickerStickerCell, SCStickerQuerySuggestionController, SCUserSession, UICollectionView, UIImage, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol SCStickerPickerCategoryDelegate, SCStickerPickerMenuDelegate;

@interface SCStickerPickerCategoryCell : UICollectionViewCell <UICollectionViewDataSource, UIGestureRecognizerDelegate, UICollectionViewDelegate, SCStickerPickerCategoryCellScrollbarDelegate, SCTimeProfilable, SCStickerQuerySuggestionControllerDelegate, SCCustomStickerManagerListener, SCGiphyStickerSearchSectionDelegate, SCBitmojiAvatarPickerViewControllerDelegate>
{
    SCUserSession *_userSession;
    UICollectionView *_collectionView;
    UIImageView *_skinTonePicker;
    SCBitmojiAvatarPicker *_friendmojiPicker;
    SCPreviewTooltipBalloon *_friendmojiHint;
    long long _portraitColumnCount;
    long long _landscapeColumnCount;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    SCStickerPickerStickerCell *_skinToneCell;
    SCStickerCategory *_stickerCategory;
    _Bool _supportsSkinTone;
    _Bool _shouldSuppressDidScrollForScrollbar;
    SCStickerPickerCategoryCellScrollbar *_scrollbar;
    double _topOffset;
    SCPreviewTooltipBalloon *_tooltip;
    SCStickerPickerStickerCell *_stickerCellIsMoving;
    _Bool _needQueryHeader;
    _Bool _needShownQuerySection;
    long long _orientation;
    SCStickerQuerySuggestionController *_querySuggestor;
    _Bool _shouldDisplayScrollbar;
    NSString *_stickerIdForCellShowingFriendmojiPicker;
    SCCustomStickerEmptyPage *_customStickerEmptyAutoSection;
    double _itemHeight;
    NSArray *_contexts;
    _Bool _enableAutoCustomSticker;
    _Bool _enableFilterMenu;
    _Bool _enableWhiteUiV2;
    _Bool _isRecentCategory;
    _Bool _showAutocompleteToggle;
    id <SCStickerPickerCategoryDelegate> _delegate;
    id <SCStickerPickerMenuDelegate> _pickerMenuDelegate;
    double _bottomInset;
    unsigned long long _sourceType;
    UIImage *_previewImage;
}

+ (int)context;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(nonatomic) _Bool showAutocompleteToggle; // @synthesize showAutocompleteToggle=_showAutocompleteToggle;
@property(readonly, nonatomic) _Bool isRecentCategory; // @synthesize isRecentCategory=_isRecentCategory;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) __weak id <SCStickerPickerMenuDelegate> pickerMenuDelegate; // @synthesize pickerMenuDelegate=_pickerMenuDelegate;
@property(nonatomic) __weak id <SCStickerPickerCategoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateCollectionViewAnimated:(_Bool)arg1 deltaContentOffset:(double)arg2 topMargin:(double)arg3;
- (void)showSuggestor;
- (void)hideSuggestor;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)categoryCellScrollbar:(id)arg1 didScrollToSection:(long long)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)sectionCell:(id)arg1 stickerSelected:(id)arg2 center:(struct CGPoint)arg3 thumbnail:(id)arg4 index:(unsigned long long)arg5;
- (void)querySuggestControllerDidSelectItem:(id)arg1;
- (void)_prepareForStickerMoving:(id)arg1;
- (void)_completeForStickerMoving;
- (void)_setOpacityForCustomStickerCells:(double)arg1 duration:(double)arg2 userInteractionEnabled:(_Bool)arg3;
- (void)deleteCellFromAutoSection:(id)arg1 horizontalCell:(id)arg2 isMovedToSave:(_Bool)arg3 isDeleted:(_Bool)arg4;
- (void)deleteCellFromSavedSection:(id)arg1;
- (void)collectionViewLongPressed:(id)arg1;
- (void)collectionViewTapped:(id)arg1;
- (id)_stickerCellForGestureRecognizer:(id)arg1;
- (id)_bestCellForFriendmojiHint;
- (double)_tooltipYOffsetForCell:(id)arg1 extraHeight:(double)arg2;
- (_Bool)showFriendmojiHintIfPossible;
- (_Bool)_showFriendmojiPicker:(id)arg1;
- (void)tooltipBalloonDismissed;
- (void)didCloseAvatarPickerWithoutSelectingAvatar;
- (void)avatarPickerBitmojiUserSelected:(id)arg1;
- (void)setOpacityForVisibleEmojis:(double)arg1 userInteractionEnabled:(_Bool)arg2 selectedStickerCell:(id)arg3 duration:(double)arg4;
- (long long)skinToneFromLoc:(struct CGPoint)arg1;
- (_Bool)touchInSkinTonePickerRange:(struct CGPoint)arg1;
- (void)hideSkinTonePicker;
- (void)showSkinTonePicker:(id)arg1;
- (void)appendSkinTone:(long long)arg1 cell:(id)arg2;
- (id)_contextsForNetworkRequest;
- (long long)_correctSectionIndex:(long long)arg1 needQueryHeader:(_Bool)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAt:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)showToolTipBelowFirstCellWithText:(id)arg1;
- (void)fadeOutTooltip;
- (_Bool)canSubCellCollectionViewHandleGesture:(id)arg1;
- (_Bool)isCollectionViewGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) _Bool isAtTop;
@property(nonatomic) double contentOffsetY;
- (void)setStickerCategory:(id)arg1 isRecentCategory:(_Bool)arg2 orientation:(long long)arg3 userSession:(id)arg4 queryKeywords:(id)arg5 enableWhiteUiV2:(_Bool)arg6 hasSubCategories:(_Bool)arg7;
- (double)_calculateContentWidth;
- (void)_layoutCollectionView;
- (void)layoutSubviews;
- (void)resetLayout:(long long)arg1;
- (void)removeSection:(long long)arg1;
- (void)updateStickersInSection:(long long)arg1;
- (void)_scrollScrollbarToCurrentSectionAnimated:(_Bool)arg1;
- (double)_itemHeightWithOrientation:(long long)arg1 spacing:(double)arg2 shouldDisplayScrollbar:(_Bool)arg3;
- (double)_spacingWithOrientation:(long long)arg1;
- (void)stopEmptySectionVideoPlay;
- (void)startEmptySectionVideoPlay;
- (void)customStickerAutoSectionDataDidChange;
- (void)customStickerDataDidChange;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1 shouldIncludeQueryHeader:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
