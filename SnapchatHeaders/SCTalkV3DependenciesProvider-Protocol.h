//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCTAvatarServices, SCTV3ChatServices, SCTV3LensesServices, SCTV3TooltipServices;

@protocol SCTalkV3DependenciesProvider <NSObject>
- (id <SCTV3TooltipServices>)tooltipServices;
- (id <SCTV3LensesServices>)lensesServices;
- (id <SCTV3ChatServices>)chatServices;
- (id <SCTAvatarServices>)avatarServices;
@end

