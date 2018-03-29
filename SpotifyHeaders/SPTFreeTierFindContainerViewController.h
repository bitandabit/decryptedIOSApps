//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTFreeTierFindViewControllerDelegate.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTPageController.h"
#import "SPTScrollToTopViewController.h"
#import "SPViewController.h"

@class GLUETabBarViewFadeTransitionAnimator, NSArray, NSString, NSURL, SPNavigationController, SPTFreeTierFindLogger, UIView, UIViewController<SPTFreeTierFindViewController>, UIViewController<SPTSearch2RootViewControllerProtocol>;

@interface SPTFreeTierFindContainerViewController : UIViewController <SPViewController, SPTNavigationControllerNavigationBarState, SPTFreeTierFindViewControllerDelegate, SPTScrollToTopViewController, SPTPageController>
{
    UIViewController<SPTFreeTierFindViewController> *_findViewController;
    SPNavigationController *_searchNavigationController;
    UIViewController<SPTSearch2RootViewControllerProtocol> *_searchViewController;
    UIView *_searchTitleView;
    GLUETabBarViewFadeTransitionAnimator *_transitionAnimator;
    id <SPTFreeTierFindInterfaceFactory> _interfaceFactory;
    SPTFreeTierFindLogger *_logger;
    NSArray *_barbuttonItems;
}

@property(readonly, copy, nonatomic) NSArray *barbuttonItems; // @synthesize barbuttonItems=_barbuttonItems;
@property(retain, nonatomic) SPTFreeTierFindLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTFreeTierFindInterfaceFactory> interfaceFactory; // @synthesize interfaceFactory=_interfaceFactory;
@property(retain, nonatomic) GLUETabBarViewFadeTransitionAnimator *transitionAnimator; // @synthesize transitionAnimator=_transitionAnimator;
@property(retain, nonatomic) UIView *searchTitleView; // @synthesize searchTitleView=_searchTitleView;
@property(retain, nonatomic) UIViewController<SPTSearch2RootViewControllerProtocol> *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) SPNavigationController *searchNavigationController; // @synthesize searchNavigationController=_searchNavigationController;
@property(retain, nonatomic) UIViewController<SPTFreeTierFindViewController> *findViewController; // @synthesize findViewController=_findViewController;
- (void).cxx_destruct;
- (void)spt_scrollToTop;
- (void)cancelButtonPressed;
- (id)makeCancelBarButtonItem;
- (void)removeViewController:(id)arg1;
- (void)addViewController:(id)arg1;
- (void)performTransitionFromViewController:(id)arg1 toViewController:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)navigateToFindPage;
- (void)openSearchPage;
- (unsigned long long)preferredNavigationBarState;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)URI;
- (void)sp_updateContentInsets;
- (void)adjustChildViewInsets;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFindViewController:(id)arg1 interfaceFactory:(id)arg2 barbuttonItems:(id)arg3 transitionAnimator:(id)arg4 logger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
