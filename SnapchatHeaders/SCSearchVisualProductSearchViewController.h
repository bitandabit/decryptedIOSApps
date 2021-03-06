//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCSearchContentViewControlling-Protocol.h"
#import "SCSearchQueryResultControllerDelegate-Protocol.h"

@class NSString, SCSearchContentViewControllerContext, SCSearchQueryResultController, UICollectionView;

@interface SCSearchVisualProductSearchViewController : UIViewController <SCSearchQueryResultControllerDelegate, SCSearchContentViewControlling>
{
    SCSearchQueryResultController *_queryResultController;
    UICollectionView *_collectionView;
    SCSearchContentViewControllerContext *_searchContentViewControllerContext;
}

@property(retain, nonatomic) SCSearchContentViewControllerContext *searchContentViewControllerContext; // @synthesize searchContentViewControllerContext=_searchContentViewControllerContext;
- (void).cxx_destruct;
- (id)presentingViewControllerForSearchQueryResultController:(id)arg1;
- (_Bool)searchQueryResultControllerShouldUseBuiltInSectionHeaders:(id)arg1;
- (void)searchQueryResultController:(id)arg1 willUpdateResultForQuery:(id)arg2 fromQuery:(id)arg3;
- (void)searchQueryResultControllerDidUpdateQueryResult:(id)arg1;
- (void)searchQueryResultControllerDidDelayReloadFreshResult:(id)arg1;
- (_Bool)searchQueryResultControllerShouldReloadFreshResult:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)_setupCollectionView;
- (id)initWithUserSession:(id)arg1 queryCoordinator:(id)arg2 sectionCreator:(id)arg3 initialQuery:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

