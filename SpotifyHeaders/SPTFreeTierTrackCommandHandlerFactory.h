//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTFreeTierTrackCommandHandlerFactory : NSObject
{
    id <EXP_SPTHubCommandHandlerFactory> _defaultCommandHandlerFactory;
    id <EXP_SPTHubFrameworkService> _hubService;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTFreeTierUpsellService> _upsellService;
}

@property(readonly, nonatomic) __weak id <SPTFreeTierUpsellService> upsellService; // @synthesize upsellService=_upsellService;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) __weak id <EXP_SPTHubFrameworkService> hubService; // @synthesize hubService=_hubService;
@property(readonly, nonatomic) id <EXP_SPTHubCommandHandlerFactory> defaultCommandHandlerFactory; // @synthesize defaultCommandHandlerFactory=_defaultCommandHandlerFactory;
- (void).cxx_destruct;
- (id)createLoggerForViewURI:(id)arg1 referrerIdentifier:(id)arg2;
- (id)createCommandHandlerForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignalSource:(id)arg3;
- (id)initWithDefaultCommandHandlerFactory:(id)arg1 hubService:(id)arg2 linkDispatcher:(id)arg3 upsellService:(id)arg4;

@end

