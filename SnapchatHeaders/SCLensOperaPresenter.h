//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCLensOperaPresenterProtocol-Protocol.h"
#import "SCOperaEventListener-Protocol.h"

@class NSString, SCOperaViewController, SCOperaViewModel, UIViewController;
@protocol SCLensOperaPresenterDelegateProtocol, SCLensOperaViewingSessionFactoryProtocol, SCLensOperaViewingSessionProtocol, SCOperaConfigurationFactoryProtocol;

@interface SCLensOperaPresenter : NSObject <SCOperaEventListener, SCLensOperaPresenterProtocol>
{
    long long _lensOperaFeatureType;
    SCOperaViewModel *_operaViewModel;
    UIViewController *_fromViewController;
    id <SCOperaConfigurationFactoryProtocol> _operaConfigurationFactory;
    id <SCLensOperaViewingSessionFactoryProtocol> _lensOperaViewingSessionFactory;
    id <SCLensOperaPresenterDelegateProtocol> _delegate;
    SCOperaViewController *_operaViewController;
    id <SCLensOperaViewingSessionProtocol> _operaViewingSession;
}

- (void).cxx_destruct;
- (void)_cleanupOperaVC;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (_Bool)isPresenting;
- (void)dismiss;
- (void)present;
- (long long)lensOperaFeatureType;
- (id)initWithLensOperaFeatureType:(long long)arg1 operaViewModel:(id)arg2 fromViewController:(id)arg3 operaConfigurationFactory:(id)arg4 lensOperaViewingSessionFactory:(id)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

