//
//  HomeModel.m
//  MyShop
//
//  Created by MacBook Air on 2018/5/16.
//  Copyright © 2018年 YH. All rights reserved.
//

#import "HomeModel.h"

@implementation HomeModel
@end

@implementation HomeData
+ (NSDictionary *)objectClassInArray{
    return @{@"banner" : [Banner class],
             @"news" : [News class],
             @"hotGoods" : [HotGoods class],
             @"recommendGoods" : [RecommendGoods class],
             };
}
@end

@implementation HomeNeardy
@end

@implementation Banner
+ (NSDictionary *)modelCustomPropertyMapper {
    return @{@"bannerId" : @"id",
             @"bannerImgSrc" : @"imgSrc",
             @"bannerUrl" : @"url"};
}
@end

@implementation News
+ (NSDictionary *)modelCustomPropertyMapper {
    return @{@"newsId" : @"id",
             @"newsTitle" : @"title"};
}
@end

@implementation Consume
@end

@implementation HotGoods
+ (NSDictionary *)modelCustomPropertyMapper {
    return @{@"goodsId" : @"id",
             @"goodsName" : @"name",
             @"goodsPrice" : @"price",
             @"goodsOldPrice" : @"oldPrice",
             @"goodsSellerNum" : @"sellerNum",
             @"goodsImg" : @"img"};
}
@end

@implementation RecommendGoods
+ (NSDictionary *)modelCustomPropertyMapper {
    return @{@"goodsId" : @"id",
             @"goodsName" : @"name",
             @"goodsPrice" : @"price",
             @"goodsOldPrice" : @"oldPrice",
             @"goodsSellerNum" : @"sellerNum",
             @"goodsImg" : @"img"};
}
@end

@implementation NearBusiness
+ (NSDictionary *)modelCustomPropertyMapper {
    return @{@"businessId" : @"id",
             @"businesImg" : @"img",
             @"businesName" : @"name",
             @"businesAddress" : @"address",
             @"businesScore" : @"score",
             @"businesEval" : @"eval",
             @"lati" : @"lat",
             @"longi" : @"long"};
}
@end

@implementation NearSeller
+ (NSDictionary *)modelCustomPropertyMapper {
    return @{@"businessId" : @"id",
             @"businesImg" : @"img",
             @"businesName" : @"name",
             @"businesAddress" : @"address",
             @"businesScore" : @"score",
             @"businesEval" : @"eval",
             @"lati" : @"lat",
             @"longi" : @"long"};
}
@end



