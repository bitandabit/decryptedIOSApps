//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchEventAnnouncing-Protocol.h"

@class SCOperaMetaStoryLayerViewController, SCSearchQuery, UIViewController;
@protocol SCSearchTranslationDrivenInteractiveTransitioning;

@protocol SCOperaMetaStoryViewControllerProviding <SCSearchEventAnnouncing>
- (id <SCSearchTranslationDrivenInteractiveTransitioning>)interactivePresentingTransitionControllerForOperaLayerViewController:(SCOperaMetaStoryLayerViewController *)arg1;
- (UIViewController *)metaStoryViewControllerWithOperaLayerViewController:(SCOperaMetaStoryLayerViewController *)arg1 initialSearchQuery:(SCSearchQuery *)arg2;
@end

