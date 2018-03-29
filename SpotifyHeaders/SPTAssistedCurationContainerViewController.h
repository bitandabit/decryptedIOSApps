//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTAssistedCurationPresentationHelperDelegate.h"
#import "SPTAssistedCurationViewControllerDelegate.h"
#import "SPTPageController.h"

@class NSString, NSURL, SPTAssistedCurationLogger, SPTAssistedCurationViewController, UIViewController<SPTSearch2RootViewControllerProtocol>;

@interface SPTAssistedCurationContainerViewController : UIViewController <SPTPageController, SPTAssistedCurationViewControllerDelegate, SPTAssistedCurationPresentationHelperDelegate>
{
    NSURL *_pageURI;
    SPTAssistedCurationViewController *_assistedCurationViewController;
    UIViewController<SPTSearch2RootViewControllerProtocol> *_searchViewController;
    SPTAssistedCurationLogger *_logger;
}

@property(retain, nonatomic) SPTAssistedCurationLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) UIViewController<SPTSearch2RootViewControllerProtocol> *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) SPTAssistedCurationViewController *assistedCurationViewController; // @synthesize assistedCurationViewController=_assistedCurationViewController;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI; // @synthesize pageURI=_pageURI;
- (void).cxx_destruct;
- (void)backButtonTapped:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)dismissSearchViewControllerFor:(id)arg1;
- (void)openSearchFor:(id)arg1;
- (void)animateSearchTransitionFromView:(id)arg1 toView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)navigateToAssistedCuration;
- (void)openSearchPage;
- (void)removeViewController:(id)arg1;
- (void)addViewController:(id)arg1;
- (void)viewDidLoad;
- (id)initWithPageURI:(id)arg1 assistedCurationViewController:(id)arg2 searchViewContoller:(id)arg3 logger:(id)arg4;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

