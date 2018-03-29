//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCLensOperaPresenterDelegateProtocol-Protocol.h"

@class NSString, SCLens, SCLensLogger, UIViewController;
@protocol NavigationDelegate, SCLensOperaControllerDelegate, SCLensOperaPresenterProtocol, SCOperaPresentersFactoryProtocol;

@interface SCLensOperaController : NSObject <SCLensOperaPresenterDelegateProtocol>
{
    UIViewController *_parentViewController;
    SCLensLogger *_lensLogger;
    id <SCLensOperaControllerDelegate> _delegate;
    id <SCOperaPresentersFactoryProtocol> _operaPresentersFactory;
    id <SCLensOperaPresenterProtocol> _activeOperaPresenter;
    id <NavigationDelegate> _navigationDelegate;
    SCLens *_activeLens;
}

@property(retain, nonatomic) SCLens *activeLens; // @synthesize activeLens=_activeLens;
- (void).cxx_destruct;
- (void)_prepareOperaPresenterFactory;
- (void)lensOperaPresenterDidDismissOperaViewController:(id)arg1;
- (void)dismissLensOperaPresenter;
- (void)showMoreLensesOperaPresenterForLens:(id)arg1;
- (void)showCallToActionOperaPresenterForLens:(id)arg1;
- (_Bool)isPresenting;
- (id)initWithParentViewController:(id)arg1 lensLogger:(id)arg2 delegate:(id)arg3 navigationDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

