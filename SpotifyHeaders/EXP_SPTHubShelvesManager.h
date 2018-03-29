//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class EXP_HUBComponentView<EXP_SPTHubSwipeableTableViewCellComponentView>, NSString, NSURL, SPTSwipeGestureRecognizer, UICollectionView;

@interface EXP_SPTHubShelvesManager : NSObject <UIGestureRecognizerDelegate>
{
    EXP_HUBComponentView<EXP_SPTHubSwipeableTableViewCellComponentView> *_activeComponentView;
    id <SPTShelves> _shelves;
    UICollectionView *_hubContentView;
    NSURL *_viewURI;
    id <EXP_SPTHubComponentModelURIResolver> _componentModelURIResolver;
    SPTSwipeGestureRecognizer *_swipeGestureRecognizer;
}

@property(retain, nonatomic) SPTSwipeGestureRecognizer *swipeGestureRecognizer; // @synthesize swipeGestureRecognizer=_swipeGestureRecognizer;
@property(readonly, nonatomic) id <EXP_SPTHubComponentModelURIResolver> componentModelURIResolver; // @synthesize componentModelURIResolver=_componentModelURIResolver;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic) UICollectionView *hubContentView; // @synthesize hubContentView=_hubContentView;
@property(readonly, nonatomic) __weak id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(nonatomic) __weak EXP_HUBComponentView<EXP_SPTHubSwipeableTableViewCellComponentView> *activeComponentView; // @synthesize activeComponentView=_activeComponentView;
- (void).cxx_destruct;
- (id)swipeableComponentViewInParentView:(id)arg1 atLocation:(struct CGPoint)arg2;
- (id)swipeableComponentViewForLocation:(struct CGPoint)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleSwipeGestureRecognizer:(id)arg1;
- (void)setupSwipeGestureRecognizerIfNeeded;
- (void)enableShelvesForComponentView:(id)arg1;
- (id)initWithShelves:(id)arg1 hubContentView:(id)arg2 viewURI:(id)arg3 componentModelURIResolver:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
