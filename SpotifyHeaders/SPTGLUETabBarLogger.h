//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTGLUETabBarLogger : NSObject
{
    id <SPTLogCenterProtocol> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (id)tabBar_pageURIFromViewController:(id)arg1;
- (void)logAppearEventForFriendlyName:(id)arg1 viewController:(id)arg2 index:(unsigned long long)arg3;
- (void)logOpenEventForTargetViewController:(id)arg1 fromViewController:(id)arg2 index:(unsigned long long)arg3;
- (id)initWithLogCenter:(id)arg1;

@end
