//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNotificationCenter;

@interface SPTInstrumentationInterfaceOrientationMonitor : NSObject
{
    id <SPTInstrumentationTransport> _transport;
    id <SPTInstrumentationPageStream> _pageStream;
    NSNotificationCenter *_notificationCenter;
}

@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(nonatomic) __weak id <SPTInstrumentationPageStream> pageStream; // @synthesize pageStream=_pageStream;
@property(retain, nonatomic) id <SPTInstrumentationTransport> transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (id)orientationValue:(long long)arg1;
- (void)sendLogMessageForOrientation:(long long)arg1;
- (void)dealloc;
- (void)didChangeInterfaceOrientation:(id)arg1;
- (id)initWithTransport:(id)arg1 pageStream:(id)arg2 notificationCenter:(id)arg3;

@end

