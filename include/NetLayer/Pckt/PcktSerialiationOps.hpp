#pragma once

#include "../Common/Common.hpp"
#include "../Pckt/PcktImpl.hpp"

namespace sf
{
    template <typename... Ts>
    inline auto& operator<<(nl::PcktBuf& mP, const nl::impl::Pckt<Ts...>& mX)
    {
        return mP << mX.fields;
    }

    template <typename... Ts>
    inline auto& operator>>(nl::PcktBuf& mP, nl::impl::Pckt<Ts...>& mX)
    {
        return mP >> mX.fields;
    }
}
