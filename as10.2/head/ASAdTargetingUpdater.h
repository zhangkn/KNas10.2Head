//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASADTargetingTimerProxyFireable-Protocol.h"
#import "ASAdTargetingRefreshPeriodProvider-Protocol.h"

@class NSString, NSTimer;
@protocol ASAdTargetingRefreshPeriodProvider, ASAdTargetingRefreshable;

@interface ASAdTargetingUpdater : NSObject <ASADTargetingTimerProxyFireable, ASAdTargetingRefreshPeriodProvider>
{
    double _targetingRefreshPeriod;
    id <ASAdTargetingRefreshable> _adSession;
    id <ASAdTargetingRefreshPeriodProvider> _refreshPeriodUpdater;
    NSTimer *_freshnessTimer;
}

@property(nonatomic) __weak NSTimer *freshnessTimer; // @synthesize freshnessTimer=_freshnessTimer;
@property(retain, nonatomic) id <ASAdTargetingRefreshPeriodProvider> refreshPeriodUpdater; // @synthesize refreshPeriodUpdater=_refreshPeriodUpdater;
@property(retain, nonatomic) id <ASAdTargetingRefreshable> adSession; // @synthesize adSession=_adSession;
- (void).cxx_destruct;
- (void)as_ADTargetingTimerProxyTimerFired:(id)arg1;
- (void)stopFreshnessTimer;
- (void)updateFreshnessTimerTimeInterval;
- (void)startFreshnessTimer;
- (void)fetchTargetingRefreshPeriod:(CDUnknownBlockType)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)startListeningForAppEvents;
@property(nonatomic) double targetingRefreshPeriod; // @synthesize targetingRefreshPeriod=_targetingRefreshPeriod;
- (void)_updateAdCache;
- (void)dealloc;
- (void)updateTargetingDataNow;
- (void)startUpdatingTargetingData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

