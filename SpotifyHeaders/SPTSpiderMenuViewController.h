//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTContextMenuTaskActionDelegate.h"

@class NSDictionary, NSString, SPTSpiderMenuLogger, SPTSpiderMenuView, UIImageView, UIVisualEffectView;

@interface SPTSpiderMenuViewController : UIViewController <SPTContextMenuTaskActionDelegate>
{
    NSDictionary *_iconViews;
    SPTSpiderMenuView *_spiderMenuView;
    SPTSpiderMenuLogger *_spiderLogger;
    UIVisualEffectView *_topVisualEffectView;
    UIVisualEffectView *_bottomVisualEffectView;
    UIImageView *_highlightedImageView;
    long long _actionsLoadedCount;
    CDUnknownBlockType _completionBlock;
}

+ (struct CGRect)frameForViewBelowHighlightedView:(id)arg1;
+ (struct CGRect)frameForViewAboveHighlightedView:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) long long actionsLoadedCount; // @synthesize actionsLoadedCount=_actionsLoadedCount;
@property(retain, nonatomic) UIImageView *highlightedImageView; // @synthesize highlightedImageView=_highlightedImageView;
@property(retain, nonatomic) UIVisualEffectView *bottomVisualEffectView; // @synthesize bottomVisualEffectView=_bottomVisualEffectView;
@property(retain, nonatomic) UIVisualEffectView *topVisualEffectView; // @synthesize topVisualEffectView=_topVisualEffectView;
@property(retain, nonatomic) SPTSpiderMenuLogger *spiderLogger; // @synthesize spiderLogger=_spiderLogger;
@property(retain, nonatomic) SPTSpiderMenuView *spiderMenuView; // @synthesize spiderMenuView=_spiderMenuView;
@property(retain, nonatomic) NSDictionary *iconViews; // @synthesize iconViews=_iconViews;
- (void).cxx_destruct;
- (void)contextMenuTaskActionDidUpdate:(id)arg1;
- (void)closeSpiderMenuWithGestureRecognizer:(id)arg1;
- (void)updateHoverLocation:(struct CGPoint)arg1 gestureRecognizer:(id)arg2;
- (void)setActions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)openSpiderMenuWithPoint:(struct CGPoint)arg1 highlightedView:(id)arg2 gestureRecognizer:(id)arg3;
- (void)viewDidLoad;
- (id)initWithSpiderLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

