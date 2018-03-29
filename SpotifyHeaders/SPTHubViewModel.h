//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHubContentLoaderDelegate.h"
#import "SPTPageContainer.h"

@class NSDictionary, NSMutableArray, NSString, NSURL, SPTHubContentLoader, SPTHubContentSetImplementation, SPTHubViewHeaderData, SPTViewLogger;

@interface SPTHubViewModel : NSObject <SPTHubContentLoaderDelegate, SPTPageContainer>
{
    id <SPTHubViewModelDelegate> _delegate;
    NSURL *_viewURI;
    SPTHubContentSetImplementation *_contentSet;
    unsigned long long _selectedTabItemIndex;
    SPTHubContentLoader *_contentLoader;
    NSMutableArray *_pendingInstrumentationDataContinuations;
    id <SPTPageController> _currentPageController;
    SPTViewLogger *_viewLogger;
}

@property(readonly, nonatomic) SPTViewLogger *viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic, getter=spt_currentPageController) id <SPTPageController> currentPageController; // @synthesize currentPageController=_currentPageController;
@property(retain, nonatomic) NSMutableArray *pendingInstrumentationDataContinuations; // @synthesize pendingInstrumentationDataContinuations=_pendingInstrumentationDataContinuations;
@property(readonly, nonatomic) SPTHubContentLoader *contentLoader; // @synthesize contentLoader=_contentLoader;
@property(nonatomic) unsigned long long selectedTabItemIndex; // @synthesize selectedTabItemIndex=_selectedTabItemIndex;
@property(retain, nonatomic) SPTHubContentSetImplementation *contentSet; // @synthesize contentSet=_contentSet;
@property(readonly, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(nonatomic) __weak id <SPTHubViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)blockAtIndex:(unsigned long long)arg1;
- (void)didLoadContentSet:(id)arg1;
- (void)hubContentLoader:(id)arg1 didEncounterError:(id)arg2;
- (void)hubContentLoader:(id)arg1 didLoadContentSet:(id)arg2;
- (_Bool)hubContentLoaderShouldLoadRemoteContent:(id)arg1;
- (void)updateContentSetForNewSelectedTabIndex:(unsigned long long)arg1;
- (void)reloadDatasetFromEndpointWithPath:(id)arg1;
- (void)extendCurrentContentSet;
- (void)viewWillAppear;
- (void)loadInitialContentSet;
- (_Bool)blockAtIndexShouldDisplayLoadingFooterView:(unsigned long long)arg1;
- (id)footerTargetForBlockAtIndex:(unsigned long long)arg1;
- (id)footerTitleForBlockAtIndex:(unsigned long long)arg1;
- (id)dateForItemAtIndexPath:(struct SPTHubIndexPath)arg1;
- (unsigned long long)contextMenuTypeForItemAtIndexPath:(struct SPTHubIndexPath)arg1;
- (long long)iconForItemAtIndexPath:(struct SPTHubIndexPath)arg1;
- (id)targetForItemAtIndexPath:(struct SPTHubIndexPath)arg1;
- (id)itemAtIndexPath:(struct SPTHubIndexPath)arg1;
- (id)headerAccessoryButtonTargetForBlockAtIndex:(unsigned long long)arg1;
- (id)headerAccessoryButtonTitleForBlockAtIndex:(unsigned long long)arg1;
- (double)bottomMarginForBlockAtIndex:(unsigned long long)arg1;
- (double)topMarginForBlockAtIndex:(unsigned long long)arg1;
- (id)tabItemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSDictionary *metadata;
@property(readonly, nonatomic) unsigned long long numberOfTabItems;
@property(readonly, copy, nonatomic) SPTHubViewHeaderData *headerData;
- (_Bool)containsContent;
- (id)initWithViewURI:(id)arg1 contentLoader:(id)arg2 viewLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
