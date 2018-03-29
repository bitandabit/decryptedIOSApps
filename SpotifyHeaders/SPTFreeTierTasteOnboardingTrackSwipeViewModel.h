//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTFreeTierTasteOnboardingTrackSwipeAnimatorDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateTrackSwipeLayout.h"

@class NSArray, NSCache, NSMutableArray, NSString, SPTDataLoader, SPTFreeTierTasteOnboardingCurator, SPTFreeTierTasteOnboardingTheme, SPTFreeTierTasteOnboardingTrackSwipeAnimator, SPTFreeTierTasteOnboardingTrackSwipeCellStyle<GLUEStyle>, SPTFreeTierTasteOnboardingTrackSwipeViewLogger, SPTImageColorExtractor, SPTPopupManager, UICollectionView;

@interface SPTFreeTierTasteOnboardingTrackSwipeViewModel : NSObject <SPTFreeTierTasteOnboardingTrackSwipeAnimatorDelegate, SPTDataLoaderDelegate, UICollectionViewDataSource, UICollectionViewDelegateTrackSwipeLayout>
{
    _Bool _loaded;
    _Bool _completed;
    id <SPTFreeTierTasteOnboardingTrackSwipeViewModelDelegate> _delegate;
    SPTFreeTierTasteOnboardingTrackSwipeViewLogger *_logger;
    NSArray *_seedURIs;
    SPTFreeTierTasteOnboardingTheme *_theme;
    SPTFreeTierTasteOnboardingCurator *_curator;
    SPTDataLoader *_dataLoader;
    id <GLUEImageLoader> _imageLoader;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTAudioPreviewPlayer> _previewPlayer;
    SPTPopupManager *_popupManager;
    NSMutableArray *_items;
    NSMutableArray *_likedItems;
    UICollectionView *_collectionView;
    SPTFreeTierTasteOnboardingTrackSwipeAnimator *_trackSwipeAnimator;
    SPTFreeTierTasteOnboardingTrackSwipeCellStyle<GLUEStyle> *_trackSwipeCellStyle;
    SPTImageColorExtractor *_imageColorExtractor;
    NSCache *_extractedColorCache;
    struct CATransform3D _dismissTransform3D;
}

@property(nonatomic, getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic) struct CATransform3D dismissTransform3D; // @synthesize dismissTransform3D=_dismissTransform3D;
@property(retain, nonatomic) NSCache *extractedColorCache; // @synthesize extractedColorCache=_extractedColorCache;
@property(retain, nonatomic) SPTImageColorExtractor *imageColorExtractor; // @synthesize imageColorExtractor=_imageColorExtractor;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingTrackSwipeCellStyle<GLUEStyle> *trackSwipeCellStyle; // @synthesize trackSwipeCellStyle=_trackSwipeCellStyle;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingTrackSwipeAnimator *trackSwipeAnimator; // @synthesize trackSwipeAnimator=_trackSwipeAnimator;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) NSMutableArray *likedItems; // @synthesize likedItems=_likedItems;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(readonly, nonatomic) id <SPTAudioPreviewPlayer> previewPlayer; // @synthesize previewPlayer=_previewPlayer;
@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingCurator *curator; // @synthesize curator=_curator;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingTheme *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) NSArray *seedURIs; // @synthesize seedURIs=_seedURIs;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingTrackSwipeViewLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTFreeTierTasteOnboardingTrackSwipeViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CATransform3D)trackSwipeCollectionView:(id)arg1 layout:(id)arg2 disappearanceTransformForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)trackSwipeAnimator:(id)arg1 didChangeProgress:(double)arg2;
- (void)trackSwipeAnimator:(id)arg1 dismissedInDirection:(unsigned long long)arg2 withTransform:(struct CATransform3D)arg3;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)presentRetryDialogWithResponse:(id)arg1;
- (void)processItemsResponse:(id)arg1;
- (void)likeTrackID:(id)arg1;
- (void)dislikeTrackID:(id)arg1;
- (void)fetchItems;
- (void)resetFeedbackButtonStates;
- (void)dismissItem:(id)arg1 withFeedback:(_Bool)arg2;
- (void)updateCurrentItem:(id)arg1;
- (void)insertIntroItem;
- (id)collectionView:(id)arg1 trackCellForItem:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 introCellForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)extractColorWithImage:(id)arg1 item:(id)arg2;
- (void)complete;
- (void)stopPlayback;
- (void)setFeedback:(_Bool)arg1;
- (void)beginFeedback;
- (id)doneButtonText;
- (id)skipButtonText;
- (id)playButtonText;
- (id)artistText;
- (id)titleText;
- (id)promptText;
- (void)registerWithCollectionView:(id)arg1;
- (id)viewStyle;
@property(readonly, nonatomic, getter=isMinimumFeedbackCompleted) _Bool minimumFeedbackCompleted;
- (id)initWithTheme:(id)arg1 curator:(id)arg2 logger:(id)arg3 dataLoader:(id)arg4 imageLoader:(id)arg5 collectionPlatform:(id)arg6 previewPlayer:(id)arg7 popupManager:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
