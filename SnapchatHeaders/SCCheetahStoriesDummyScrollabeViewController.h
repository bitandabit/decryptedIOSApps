//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCSearchContentScrollViewProviding-Protocol.h"

@class NSString, UIScrollView;
@protocol UIScrollViewDelegate;

@interface SCCheetahStoriesDummyScrollabeViewController : UIViewController <SCSearchContentScrollViewProviding>
{
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollingDelegate;
@property(readonly, nonatomic) UIScrollView *contentScrollView;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
