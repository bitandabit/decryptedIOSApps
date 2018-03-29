//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGalleryLeftSwipableViewController.h"

#import "SCGalleryCellActionMenuHelperDelegate-Protocol.h"
#import "SCGalleryCollectionViewHelperDataSource-Protocol.h"
#import "SCGalleryCollectionViewSelectionHelperDelegate-Protocol.h"
#import "SCGalleryEditStoryHeaderViewDelegate-Protocol.h"
#import "SCGalleryHighlightViewCellDelegate-Protocol.h"
#import "SCGalleryOperaPresenterDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, SCGalleryCellActionMenuHelper, SCGalleryCollectionViewHelper, SCGalleryCollectionViewLayoutCalculator, SCGalleryCollectionViewSelectionHelper, SCGalleryOperaPresenter, SCUserSession, UICollectionView;
@protocol SCGalleryEntry, SCObserving;

@interface SCGalleryEditStoryViewController : SCGalleryLeftSwipableViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, SCGalleryCollectionViewSelectionHelperDelegate, SCGalleryCollectionViewHelperDataSource, SCGalleryHighlightViewCellDelegate, SCGalleryOperaPresenterDelegate, SCGalleryEditStoryHeaderViewDelegate, SCGalleryCellActionMenuHelperDelegate>
{
    id <SCGalleryEntry> _entry;
    SCUserSession *_userSession;
    NSArray *_snaps;
    UICollectionView *_collectionView;
    SCGalleryCollectionViewLayoutCalculator *_collectionViewLayoutCalculator;
    SCGalleryCollectionViewSelectionHelper *_collectionViewSelectionHelper;
    SCGalleryCollectionViewHelper *_collectionViewHelper;
    long long _savedStatusStyle;
    SCGalleryOperaPresenter *_operaPresenter;
    SCGalleryOperaPresenter *_headerOperaPresenter;
    id <SCObserving> _observeContext;
    SCGalleryCellActionMenuHelper *_snapActionMenuHelper;
}

- (void).cxx_destruct;
- (void)editStoryHeaderView:(id)arg1 didTapEntry:(id)arg2;
- (long long)operaPresenter:(id)arg1 overrideTransitionModeForItem:(id)arg2;
- (void)operaPresenterDidDismiss:(id)arg1 item:(id)arg2;
- (void)operaPresenterDidPresent:(id)arg1;
- (void)operaPresenterCancelledDismiss:(id)arg1;
- (void)operaPresenterBeganDismiss:(id)arg1;
- (void)operaPresenter:(id)arg1 didSwitchToNewCreatedItem:(id)arg2;
- (id)operaPresenter:(id)arg1 didOpenViewWithSnap:(id)arg2;
- (id)operaPresenter:(id)arg1 didOpenViewWithItem:(id)arg2;
- (void)highlightViewCell:(id)arg1 handleDelete:(id)arg2;
- (id)galleryCollectionViewHelper:(id)arg1 itemAtIndexPath:(id)arg2;
- (void)galleryCellActionMenuHelperDidSaveFeaturedStory:(id)arg1 item:(id)arg2;
- (void)galleryCellActionMenuHelperIsSavingFeaturedStory:(id)arg1 item:(id)arg2;
- (id)galleryCellActionMenuHelperShouldUpdateSourceView:(id)arg1 item:(id)arg2 snap:(id)arg3;
- (_Bool)galleryCollectionViewIsFullyVisible:(id)arg1;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 handleLongPress:(id)arg2 itemAtIndexPath:(id)arg3 selectionMode:(unsigned long long)arg4;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didTapItemAtIndexPath:(id)arg2 selectionMode:(unsigned long long)arg3;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didChangeSelectionMode:(unsigned long long)arg2 atIndexPath:(id)arg3;
- (_Bool)galleryCollectionViewSelectionHelper:(id)arg1 shouldChangeSelectionMode:(unsigned long long)arg2 atIndexPath:(id)arg3;
- (_Bool)galleryCollectionViewSelectionHelper:(id)arg1 isItemInteractionEnabledAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)_didPressBackButton;
- (void)_unobserveEntryChanges;
- (void)_observeEntryChanges;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)pageName;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldDisplayStatusBar;
- (id)initWithWithUserSession:(id)arg1 entry:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

