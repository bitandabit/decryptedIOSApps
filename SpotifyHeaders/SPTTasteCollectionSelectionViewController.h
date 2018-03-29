//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTImageLoaderDelegate.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTPageController.h"
#import "SPTTasteCollectionDataLoaderArtistDelegate.h"
#import "SPTTasteCollectionSearchControllerDelegate.h"
#import "SPTTasteCollectionViewCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UISearchBarDelegate.h"

@class NSMutableArray, NSString, NSURL, SPTTasteCollectionConfiguration, SPTTasteCollectionDataLoader, SPTTasteCollectionHeaderView, SPTTasteCollectionLogger, SPTTasteCollectionSearchController, SPTTasteCollectionSelectionView, SPTTheme;

@interface SPTTasteCollectionSelectionViewController : UIViewController <SPTTasteCollectionViewCellDelegate, SPTTasteCollectionSearchControllerDelegate, SPTNavigationControllerNavigationBarState, SPTPageController, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SPTImageLoaderDelegate, SPTTasteCollectionDataLoaderArtistDelegate, UISearchBarDelegate>
{
    _Bool _shouldShowSearchView;
    int _insertIndex;
    id <SPTTasteCollectionSelectionViewControllerDelegate> _delegate;
    SPTTasteCollectionConfiguration *_configuration;
    SPTTheme *_theme;
    SPTTasteCollectionSearchController *_searchController;
    SPTTasteCollectionSelectionView *_selectionView;
    SPTTasteCollectionDataLoader *_dataLoader;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTImageLoader> _imageLoader;
    SPTTasteCollectionHeaderView *_headerView;
    double _minHeaderViewHeight;
    double _maxHeaderViewHeight;
    double _scrollOffset;
    SPTTasteCollectionLogger *_logger;
    NSMutableArray *_allCombined;
    NSMutableArray *_allGenres;
    NSMutableArray *_answers;
}

@property(retain, nonatomic) NSMutableArray *answers; // @synthesize answers=_answers;
@property(retain, nonatomic) NSMutableArray *allGenres; // @synthesize allGenres=_allGenres;
@property(retain, nonatomic) NSMutableArray *allCombined; // @synthesize allCombined=_allCombined;
@property(retain, nonatomic) SPTTasteCollectionLogger *logger; // @synthesize logger=_logger;
@property int insertIndex; // @synthesize insertIndex=_insertIndex;
@property _Bool shouldShowSearchView; // @synthesize shouldShowSearchView=_shouldShowSearchView;
@property double scrollOffset; // @synthesize scrollOffset=_scrollOffset;
@property(nonatomic) double maxHeaderViewHeight; // @synthesize maxHeaderViewHeight=_maxHeaderViewHeight;
@property(nonatomic) double minHeaderViewHeight; // @synthesize minHeaderViewHeight=_minHeaderViewHeight;
@property(retain, nonatomic) SPTTasteCollectionHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) SPTTasteCollectionDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) SPTTasteCollectionSelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) SPTTasteCollectionSearchController *searchController; // @synthesize searchController=_searchController;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTTasteCollectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <SPTTasteCollectionSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)searchViewWillDismissWithSearchController:(id)arg1 selectedArtist:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)searchViewWillDismissWithSearchController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushSearchViewController;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)bottomBarSkipButtonClicked;
- (void)bottomBarFinishButtonClicked;
- (void)skipButtonClicked;
- (void)presentPopupDialog;
- (unsigned long long)preferredNavigationBarState;
- (void)setupButtons;
- (void)setupImages;
- (id)headerSubtitle;
- (id)headerTitle;
- (void)setupCollectionView;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)requestRelatedArtistsForSelectedItemWithArtistId:(id)arg1;
- (void)applyConfiguration;
- (void)changeSelectionForCell:(id)arg1 withMediaItem:(id)arg2 indexPath:(id)arg3;
- (void)setInsertIndexForSelectedArtistWithID:(id)arg1;
- (void)processSelection:(id)arg1 mediaItem:(id)arg2 indexPath:(id)arg3;
- (void)tasteCollectionViewCell:(id)arg1 didRequestRelatedArtistsForSelectedItemWithArtistId:(id)arg2;
- (void)tasteCollectionViewCell:(id)arg1 didExpandSelectedGenreWithArtists:(id)arg2 indexPath:(id)arg3;
- (void)tasteCollectionViewCell:(id)arg1 didSelectCell:(id)arg2 withMediaItem:(id)arg3 indexPath:(id)arg4;
- (void)updateExistingItemWithNewArtistData:(id)arg1;
- (void)updateDataWithArtists:(id)arg1;
- (void)updateDataWithArtists:(id)arg1 preferredIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldSelectionViewScroll:(id)arg1;
- (void)tasteCollectionDataLoader:(id)arg1 finishedWithArtists:(id)arg2;
- (void)tasteCollectionDataLoader:(id)arg1 finishedWithInitialItems:(id)arg2 minRequiredNumberOfItems:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithDataLoader:(id)arg1 imageLoaderFactory:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

