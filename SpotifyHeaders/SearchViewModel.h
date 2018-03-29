//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTEmbeddedCollectionViewViewModelDelegate.h"
#import "SPTSearchResultsLoaderDelegate.h"
#import "SPTThemableViewLayoutDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UITableViewDataSource.h"

@class NSString, NSURL, NSUUID, SPTSearchResults, SPTSearchResultsLoader, SearchViewModelSettings;

@interface SearchViewModel : NSObject <UITableViewDataSource, SPTThemableViewLayoutDelegate, SPTEmbeddedCollectionViewViewModelDelegate, UICollectionViewDataSource, SPTSearchResultsLoaderDelegate>
{
    _Bool _scrollEmbeddedCollectionViewToStart;
    _Bool _offline;
    _Bool _waitingToPerformDelayedRequest;
    id <SearchViewModelDelegate> _delegate;
    SearchViewModelSettings *_settings;
    NSString *_searchString;
    NSString *_searchTag;
    id <GLUETheme> _theme;
    id <GLUEImageLoader> _imageLoader;
    id <SPTSearchResultsDecorator> _resultsDecorator;
    SPTSearchResults *_results;
    SPTSearchResultsLoader *_resultsLoader;
    NSUUID *_currentSearchIntentIdentifier;
    unsigned long long _currentRequestSequenceNumber;
}

@property(nonatomic) unsigned long long currentRequestSequenceNumber; // @synthesize currentRequestSequenceNumber=_currentRequestSequenceNumber;
@property(copy, nonatomic) NSUUID *currentSearchIntentIdentifier; // @synthesize currentSearchIntentIdentifier=_currentSearchIntentIdentifier;
@property(nonatomic) _Bool waitingToPerformDelayedRequest; // @synthesize waitingToPerformDelayedRequest=_waitingToPerformDelayedRequest;
@property(retain, nonatomic) SPTSearchResultsLoader *resultsLoader; // @synthesize resultsLoader=_resultsLoader;
@property(retain, nonatomic) SPTSearchResults *results; // @synthesize results=_results;
@property(retain, nonatomic) id <SPTSearchResultsDecorator> resultsDecorator; // @synthesize resultsDecorator=_resultsDecorator;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(nonatomic, getter=shouldScrollEmbeddedCollectionViewToStart) _Bool scrollEmbeddedCollectionViewToStart; // @synthesize scrollEmbeddedCollectionViewToStart=_scrollEmbeddedCollectionViewToStart;
@property(copy, nonatomic) NSString *searchTag; // @synthesize searchTag=_searchTag;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) SearchViewModelSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <SearchViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)searchResultsLoaderDidChangeStatus:(id)arg1;
- (void)clear;
- (void)performLoadRequest;
- (id)requestParametersForCurrentState;
- (id)catalogue;
@property(readonly, nonatomic) unsigned long long entityVersion;
@property(readonly, nonatomic) NSURL *viewURL;
@property(readonly, nonatomic) unsigned long long indexOfLastSectionContainingResults;
@property(readonly, nonatomic, getter=isForAllResultsView) _Bool forAllResultsView;
@property(readonly, nonatomic) unsigned long long numberOfResults;
@property(readonly, nonatomic) unsigned long long numberOfSections;
@property(readonly, nonatomic) unsigned long long numberOfDatasets;
@property(readonly, nonatomic) _Bool hasNextDataset;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic) NSString *pageIdentifier;
- (id)localizedOfflineModeExplanation;
- (_Bool)shouldAddPaddingCellsForSectionAtIndex:(unsigned long long)arg1;
- (_Bool)sectionAtIndexContainsInteractiveEntities:(unsigned long long)arg1;
- (unsigned long long)entityRenderingStyleForSectionAtIndex:(unsigned long long)arg1;
- (id)localizedAllResultsTitleForSectionAtIndex:(unsigned long long)arg1;
- (_Bool)shouldDisplayTitleForSectionAtIndex:(unsigned long long)arg1;
- (id)localizedTitleForSectionAtIndex:(unsigned long long)arg1;
- (id)allResultsViewTitleForSectionAtIndex:(unsigned long long)arg1;
- (id)allResultsURLForSectionAtIndex:(unsigned long long)arg1;
- (id)localizedTitleForAllResultsView;
- (id)searchSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfEntitiesInSectionAtIndex:(unsigned long long)arg1;
- (id)indexPathForModelWithURL:(id)arg1;
- (id)modelForIndexPath:(id)arg1;
- (id)identifierForSectionAtIndex:(unsigned long long)arg1;
- (void)loadNextDataset;
- (void)loadDelayed:(_Bool)arg1 searchIntentIdentifier:(id)arg2;
- (id)resultsDecoratorForInterfaceMode:(unsigned long long)arg1;
- (void)updateResultsDecorator;
- (id)initWithSettings:(id)arg1 resultsLoader:(id)arg2;
- (void)embeddedCollectionViewViewModel:(id)arg1 didSelectSearchEntity:(id)arg2;
- (id)subtitleAccessoryViewForItem:(id)arg1;
- (id)renderingInfoForCellWithType:(unsigned long long)arg1 atIndexPath:(id)arg2;
- (_Bool)cellWithTypeShouldHaveShuffleAppearance:(unsigned long long)arg1;
- (id)cellReuseIdentifierForType:(unsigned long long)arg1;
- (void)themableViewDidUpdateLayout:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)setTitlesOfCell:(id)arg1 atIndexPath:(id)arg2;
- (id)subtitleForTableViewCellForIndexPath:(id)arg1;
- (double)heightForCarouselCell;
- (double)heightForTableViewCellForIndexPath:(id)arg1;
- (unsigned long long)typeForTableViewCellForIndexPath:(id)arg1;
- (void)tableViewCellContextMenuButtonTapped:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)setupGlueCardCollectionViewCellWithModel:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

