//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchTabBarViewControllerDelegate-Protocol.h"

@class NSString, SCProfilePageCarouselTabCoordinator, SCSearchTabBarViewController;
@protocol UICollectionViewDelegate;

@interface SCProfilePageCarouselController : NSObject <SCSearchTabBarViewControllerDelegate>
{
    SCProfilePageCarouselTabCoordinator *_tabCoordinator;
    SCSearchTabBarViewController *_tabBarViewController;
    id <UICollectionViewDelegate> _collectionViewDelegate;
}

@property(nonatomic) __weak id <UICollectionViewDelegate> collectionViewDelegate; // @synthesize collectionViewDelegate=_collectionViewDelegate;
@property(readonly, nonatomic) SCSearchTabBarViewController *tabBarViewController; // @synthesize tabBarViewController=_tabBarViewController;
- (void).cxx_destruct;
- (void)searchTabBarViewControllerDidSwitchTab:(id)arg1;
- (void)loadTabPages;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
